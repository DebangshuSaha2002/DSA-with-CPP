#include <vector>
#include<iostream>
using namespace std;

long getNumberOfDroppedPackets(vector<vector<int> > requests, int max_packets, int rate) {
    int queue_packet = 0; // Number of packets currently in the pipeline
    long packets_to_dropped = 0; // Number of dropped packets

    for (auto request : requests) {
        int time = request[0];
        int packets_to_send = request[1];
        
        int packets_to_remove = min(rate, queue_packet);
        queue_packet -= packets_to_remove;

        int packets_received = std::min(max_packets - queue_packet, packets_to_send);
        queue_packet += packets_received;

        packets_to_dropped += packets_to_send - packets_received;
    }

    return packets_to_dropped;
}

int main() {
    // vector<vector<int> > requests = {{1, 8}, {4, 9}, {6, 7}};
    // vector<vector<int> > requests;

    // requests.push_back({1, 8});
    // requests.push_back({4, 9});
    // requests.push_back({6, 7});

    // vector<vector<int> > requests;
    // vector<int> request1 = {1, 8};
    // vector<int> request2 = {4, 9};
    // vector<int> request3 = {6, 7};

    // requests.push_back(request1);
    // requests.push_back(request2);
    // requests.push_back(request3);

    std::vector<std::vector<int> > requests;
    std::vector<int> request1;
    request1.push_back(1);
    request1.push_back(8);

    std::vector<int> request2;
    request2.push_back(4);
    request2.push_back(9);

    std::vector<int> request3;
    request3.push_back(6);
    request3.push_back(7);

    requests.push_back(request1);
    requests.push_back(request2);
    requests.push_back(request3);
    int max_packets = 10;
    int rate = 2;

    long packets_to_dropped = getNumberOfDroppedPackets(requests, max_packets, rate);
    cout << packets_to_dropped << endl; // Output: 2

    return 0;
}