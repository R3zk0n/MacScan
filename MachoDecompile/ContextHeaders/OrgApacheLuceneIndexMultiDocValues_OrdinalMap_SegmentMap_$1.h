// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIDOCVALUES_ORDINALMAP_SEGMENTMAP_$1_H
#define ORGAPACHELUCENEINDEXMULTIDOCVALUES_ORDINALMAP_SEGMENTMAP_$1_H



#import "OrgApacheLuceneUtilInPlaceMergeSorter.h"
#import "IOSIntArray.h"
#import "IOSLongArray.h"

@interface OrgApacheLuceneIndexMultiDocValues_OrdinalMap_SegmentMap_$1 : OrgApacheLuceneUtilInPlaceMergeSorter {
    IOSIntArray *val$newToOld_;
    IOSLongArray *val$weights_;
}




-(void)swapWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)initWithIntArray:(id)arg0 withLongArray:(id)arg1 ;
-(void)dealloc;


@end


#endif