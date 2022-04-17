#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
#define INF 2000000000

int n, e, v1, v2;
vector <pair<int, int>> vec[801];
int dist[801];

int dijkstra(int sn, int en) {
	priority_queue <pair<int, int>> pq;
	pq.push(make_pair(0, sn));

	while (!pq.empty()) {
		int cost = -1 * pq.top().first;
		int node = pq.top().second;
		pq.pop();

		for (int i = 0; i < vec[node].size(); i++) {
			int current_val = dist[node] + vec[node][i].second;
			int before_val = dist[vec[node][i].first];

			if (current_val < before_val) {
				dist[vec[node][i].first] = current_val;
				pq.push(make_pair(current_val*-1, vec[node][i].first));
			}

		}
	}
	return dist[en];
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);

	cin >> n >> e;
	for (int i = 1; i <= e; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		vec[from].push_back(make_pair(to, cost));
		vec[to].push_back(make_pair(from, cost));
	}
	cin >> v1 >> v2;

	for (int i = 1; i <= n; i++)
		dist[i] = INF; 
	dist[1] = 0;
	dijkstra(1, n);

	if (dist[v1] == INF || dist[v2] == INF || dist[n] == INF) {
		cout << -1 << endl;
		return 0;
	}


	long long result1 = 0;
	for (int i = 1; i <= n; i++)
		dist[i] = INF;
	dist[1] = 0;
	result1 += dijkstra(1,v1);
	for (int i = 1; i <= n; i++)
		dist[i] = INF;
	dist[v1] = 0;
	result1 += dijkstra(v1, v2);
	for (int i = 1; i <= n; i++)
		dist[i] = INF;
	dist[v2] = 0;
	result1 += dijkstra(v2, n);

	long long result2 = 0;
	for (int i = 1; i <= n; i++)
		dist[i] = INF;
	dist[1] = 0;
	result2 += dijkstra(1, v2);
	for (int i = 1; i <= n; i++)
		dist[i] = INF;
	dist[v2] = 0;
	result2 += dijkstra(v2, v1);
	for (int i = 1; i <= n; i++)
		dist[i] = INF;
	dist[v1] = 0;
	result2 += dijkstra(v1, n);
	cout << min(result1, result2) << endl;
}