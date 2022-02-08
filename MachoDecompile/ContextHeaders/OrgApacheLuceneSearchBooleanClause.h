// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANCLAUSE_H
#define ORGAPACHELUCENESEARCHBOOLEANCLAUSE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchQuery.h"
#import "OrgApacheLuceneSearchBooleanClause_OccurEnum.h"

@interface OrgApacheLuceneSearchBooleanClause : NSObject {
    OrgApacheLuceneSearchQuery *query_;
    OrgApacheLuceneSearchBooleanClause_OccurEnum *occur_;
}




-(id)initWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchBooleanClause_OccurEnum:(id)arg1 ;
-(id)getOccur;
-(id)getQuery;
-(BOOL)isProhibited;
-(BOOL)isRequired;
-(BOOL)isScoring;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(void)setOccurWithOrgApacheLuceneSearchBooleanClause_OccurEnum:(id)arg0 ;
-(void)setQueryWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(void)dealloc;


@end


#endif