/*
Structure of the node of Huffman tree is as
struct MinHeapNode
{
    char data;
    int freq;
    MinHeapNode *left, *right;
};
*/

class Solution {
    public:
      string decodeHuffmanData(struct MinHeapNode* root, string binaryString) {
          // Code here
          if (root == nullptr || binaryString.empty()) {
              return "";
          }
          
          string decodedString = "";
          MinHeapNode* current = root;
          
          for (char bit : binaryString) {
              if (bit == '0') {
                  current = current->left;
              } else if (bit == '1') {
                  current = current->right;
              }
              
              // If leaf node is reached, append the character to decoded string
              if (current->left == nullptr && current->right == nullptr) {
                  decodedString += current->data;
                  current = root; // Reset current pointer to root for next character
              }
          }
          
          return decodedString;
      }
  };