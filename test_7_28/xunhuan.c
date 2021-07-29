#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (arr[i] == k) {
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//		
//	}
//	if (i == sz) {
//		printf("找不到\n");
//	}
//	return 0;
////}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int left = 0;
//	int k = 7;
//	while (left <= right) 
//	{
//		int mid = (right + left) / 2;
//		//if (arr[mid] > k)
//         {
//		right = mid--; 
//          }
//		else if (arr[mid] < k) 
//		{
//			left = mid++;
//		}
//		else {
//			printf("找到了，下标是：%d\n", mid);
//				break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//
//	}
//	return 0;
//}