// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHMULTITERMQUERYCONSTANTSCOREWRAPPER_H
#define ORGAPACHELUCENESEARCHMULTITERMQUERYCONSTANTSCOREWRAPPER_H



#import "OrgApacheLuceneSearchQuery.h"
#import "OrgApacheLuceneSearchMultiTermQuery.h"

@interface OrgApacheLuceneSearchMultiTermQueryConstantScoreWrapper : OrgApacheLuceneSearchQuery {
    OrgApacheLuceneSearchMultiTermQuery *query_;
}




-(id)initWithOrgApacheLuceneSearchMultiTermQuery:(id)arg0 ;
-(id)toStringWithNSString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)getField;
-(id)createWeightWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif