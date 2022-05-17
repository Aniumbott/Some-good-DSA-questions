/*
Building n1 and n2 while also doing % with m and return the n1*n2
*/
long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long n1=0, n2=0, ans=0, m=1000000007;
    while(l1){
        n1 = n1*10;
        n1 = n1%m + l1->data;
        l1 = l1->next;
    }
    while(l2){
        n2 = n2*10;
        n2 = n2%m + l2->data;
        l2 = l2->next;
    }
    return n1%m*n2%m;
  //Your code here
}