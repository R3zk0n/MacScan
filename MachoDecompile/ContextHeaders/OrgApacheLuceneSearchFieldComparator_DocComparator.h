// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFIELDCOMPARATOR_DOCCOMPARATOR_H
#define ORGAPACHELUCENESEARCHFIELDCOMPARATOR_DOCCOMPARATOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchFieldComparator.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneSearchLeafFieldComparator-Protocol.h"

@interface OrgApacheLuceneSearchFieldComparator_DocComparator : OrgApacheLuceneSearchFieldComparator <OrgApacheLuceneSearchLeafFieldComparator>

 {
    IOSIntArray *docIDs_;
    int docBase_;
    int bottom_;
    int topValue_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(int)compareWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)compareBottomWithInt:(int)arg0 ;
-(void)copy__WithInt:(int)arg0 withInt:(int)arg1 ;
-(id)getLeafComparatorWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)setBottomWithInt:(int)arg0 ;
-(void)setTopValueWithId:(id)arg0 ;
-(id)valueWithInt:(int)arg0 ;
-(int)compareTopWithInt:(int)arg0 ;
-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(void)dealloc;


@end


#endif