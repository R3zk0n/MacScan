// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENESCOREINTERCEPTTERMQUERY_H
#define COMAPPLEPROACTIVELUCENESCOREINTERCEPTTERMQUERY_H



#import "OrgApacheLuceneSearchTermQuery.h"
#import "ComAppleProactiveLuceneScoreInterceptTarget-Protocol.h"

@interface ComAppleProactiveLuceneScoreInterceptTermQuery : OrgApacheLuceneSearchTermQuery {
    id<ComAppleProactiveLuceneScoreInterceptTarget> *target_;
    id *userObject_;
}




-(id)initWithOrgApacheLuceneIndexTerm:(id)arg0 withComAppleProactiveLuceneScoreInterceptTarget:(id)arg1 ;
-(id)createWeightWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)getUserObject;
-(void)setUserObjectWithId:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;


@end


#endif