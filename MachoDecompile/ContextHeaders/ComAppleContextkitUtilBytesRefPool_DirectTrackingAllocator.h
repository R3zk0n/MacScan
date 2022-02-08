// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLECONTEXTKITUTILBYTESREFPOOL_DIRECTTRACKINGALLOCATOR_H
#define COMAPPLECONTEXTKITUTILBYTESREFPOOL_DIRECTTRACKINGALLOCATOR_H

@class Allocator;


#import "OrgApacheLuceneUtilCounter.h"

@interface ComAppleContextkitUtilBytesRefPool_DirectTrackingAllocator : Allocator {
    OrgApacheLuceneUtilCounter *bytesUsed_;
}




-(id)initWithOrgApacheLuceneUtilCounter:(id)arg0 ;
-(id)initWithInt:(int)arg0 withOrgApacheLuceneUtilCounter:(id)arg1 ;
-(id)getByteBlock;
-(void)recycleByteBlocksWithByteArray2:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;


@end


#endif