// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFIELDCOMPARATOR_NUMERICCOMPARATOR_H
#define ORGAPACHELUCENESEARCHFIELDCOMPARATOR_NUMERICCOMPARATOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchSimpleFieldComparator.h"
#import "OrgApacheLuceneIndexNumericDocValues.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneSearchFieldComparator_NumericComparator : OrgApacheLuceneSearchSimpleFieldComparator {
    NSNumber *missingValue_;
    NSString *field_;
    id<OrgApacheLuceneUtilBits> *docsWithField_;
    OrgApacheLuceneIndexNumericDocValues *currentReaderValues_;
}




-(id)initWithNSString:(id)arg0 withNSNumber:(id)arg1 ;
-(void)doSetNextReaderWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)getNumericDocValuesWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withNSString:(id)arg1 ;
-(id)getDocsWithValueWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withNSString:(id)arg1 ;
-(void)dealloc;


@end


#endif