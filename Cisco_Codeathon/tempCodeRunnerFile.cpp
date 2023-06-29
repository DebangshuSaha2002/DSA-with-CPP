#include <vector>
#include<iostream>
using namespace std;

long getNumberOfDroppedPackets(vector<vector<int> > requests, int max_packets, int rate) {
    int packets_in_queue = 0; // Number of packets currently in the pipeline
    long dropped_packets = 0; // Number of dropped packets

    for (auto request : requests) {
        int time = request[0];
        int packets_to_send = request[1];

        // Remove packets from the queue that have been delivered
        int packets_to_remove = min(rate, packets_in_queue);
        packets_in_queue -= packets_to_remove;

        // Calculate the number of packets that arrived at this time
        int packets_received = std::min(max_packets - packets_in_queue, packets_to_send);
        packets_in_queue += packets_received;

        // Update the number of dropped packets
        dropped_packets += packets_to_send - packets_received;
    }

    return dropped_packets;
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

    long dropped_packets = getNumberOfDroppedPackets(requests, max_packets, rate);
    cout << dropped_packets << endl; // Output: 2

    return 0;
}