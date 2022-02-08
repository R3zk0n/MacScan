// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILSORTER_H
#define ORGAPACHELUCENEUTILSORTER_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilSorter : NSObject



-(id)init;
-(void)checkRangeWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)mergeInPlaceWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)lowerWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)upperWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)lower2WithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)upper2WithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)reverseWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)rotateWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)doRotateWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)insertionSortWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)binarySortWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)binarySortWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)heapSortWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)heapifyWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)siftDownWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(int)heapParentWithInt:(int)arg0 withInt:(int)arg1 ;
+(int)heapChildWithInt:(int)arg0 withInt:(int)arg1 ;


@end


#endif