// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFIELDCOMPARATOR_TERMORDVALCOMPARATOR_H
#define ORGAPACHELUCENESEARCHFIELDCOMPARATOR_TERMORDVALCOMPARATOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchFieldComparator.h"
#import "IOSIntArray.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneIndexSortedDocValues.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneSearchLeafFieldComparator-Protocol.h"

@interface OrgApacheLuceneSearchFieldComparator_TermOrdValComparator : OrgApacheLuceneSearchFieldComparator <OrgApacheLuceneSearchLeafFieldComparator>

 {
    IOSIntArray *ords_;
    IOSObjectArray *values_;
    IOSIntArray *readerGen_;
    int currentReaderGen_;
    OrgApacheLuceneIndexSortedDocValues *termsIndex_;
    int bottomSlot_;
    int bottomOrd_;
    BOOL bottomSameReader_;
    OrgApacheLuceneUtilBytesRef *bottomValue_;
    OrgApacheLuceneUtilBytesRef *topValue_;
    BOOL topSameReader_;
    int topOrd_;
    int missingSortCmp_;
    int missingOrd_;
    IOSObjectArray *tempBRs_;
    NSString *field_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withNSString:(id)arg1 ;
-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withBoolean:(BOOL)arg2 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareBottomWithInt:(int)arg0 ;
-(void)copy__WithInt:(int)arg0 withInt:(int)arg1 ;
-(id)getSortedDocValuesWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withNSString:(id)arg1 ;
-(id)getLeafComparatorWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)setBottomWithInt:(int)arg0 ;
-(void)setTopValueWithId:(id)arg0 ;
-(id)valueWithInt:(int)arg0 ;
-(int)compareTopWithInt:(int)arg0 ;
-(int)compareValuesWithId:(id)arg0 withId:(id)arg1 ;
-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(void)dealloc;


@end


#endif