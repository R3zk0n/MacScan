// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIDOCVALUES_ORDINALMAP_H
#define ORGAPACHELUCENEINDEXMULTIDOCVALUES_ORDINALMAP_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilPackedPackedLongValues.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneIndexMultiDocValues_OrdinalMap_SegmentMap.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneIndexMultiDocValues_OrdinalMap : NSObject <OrgApacheLuceneUtilAccountable>

 {
    id *owner_;
    OrgApacheLuceneUtilPackedPackedLongValues *globalOrdDeltas_;
    OrgApacheLuceneUtilPackedPackedLongValues *firstSegments_;
    IOSObjectArray *segmentToGlobalOrds_;
    OrgApacheLuceneIndexMultiDocValues_OrdinalMap_SegmentMap *segmentMap_;
    NSInteger ramBytesUsed_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 withOrgApacheLuceneIndexTermsEnumArray:(id)arg1 withOrgApacheLuceneIndexMultiDocValues_OrdinalMap_SegmentMap:(id)arg2 withFloat:(float)arg3 ;
-(id)getGlobalOrdsWithInt:(int)arg0 ;
-(NSInteger)getFirstSegmentOrdWithLong:(NSInteger)arg0 ;
-(int)getFirstSegmentNumberWithLong:(NSInteger)arg0 ;
-(NSInteger)getValueCount;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)dealloc;
+(id)buildWithId:(id)arg0 withOrgApacheLuceneIndexSortedDocValuesArray:(id)arg1 withFloat:(float)arg2 ;
+(id)buildWithId:(id)arg0 withOrgApacheLuceneIndexSortedSetDocValuesArray:(id)arg1 withFloat:(float)arg2 ;
+(id)buildWithId:(id)arg0 withOrgApacheLuceneIndexTermsEnumArray:(id)arg1 withLongArray:(id)arg2 withFloat:(float)arg3 ;
+(void)initialize;


@end


#endif