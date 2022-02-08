// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFIELDCOMPARATOR_TERMVALCOMPARATOR_H
#define ORGAPACHELUCENESEARCHFIELDCOMPARATOR_TERMVALCOMPARATOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchFieldComparator.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneIndexBinaryDocValues.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneSearchLeafFieldComparator-Protocol.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneSearchFieldComparator_TermValComparator : OrgApacheLuceneSearchFieldComparator <OrgApacheLuceneSearchLeafFieldComparator>

 {
    IOSObjectArray *values_;
    IOSObjectArray *tempBRs_;
    OrgApacheLuceneIndexBinaryDocValues *docTerms_;
    id<OrgApacheLuceneUtilBits> *docsWithField_;
    NSString *field_;
    OrgApacheLuceneUtilBytesRef *bottom_;
    OrgApacheLuceneUtilBytesRef *topValue_;
    int missingSortCmp_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withBoolean:(BOOL)arg2 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareBottomWithInt:(int)arg0 ;
-(void)copy__WithInt:(int)arg0 withInt:(int)arg1 ;
-(id)getBinaryDocValuesWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withNSString:(id)arg1 ;
-(id)getDocsWithFieldWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withNSString:(id)arg1 ;
-(BOOL)isNullWithInt:(int)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(id)getLeafComparatorWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)setBottomWithInt:(int)arg0 ;
-(void)setTopValueWithId:(id)arg0 ;
-(id)valueWithInt:(int)arg0 ;
-(int)compareValuesWithId:(id)arg0 withId:(id)arg1 ;
-(int)compareTopWithInt:(int)arg0 ;
-(id)getComparableBytesWithInt:(int)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(void)dealloc;


@end


#endif