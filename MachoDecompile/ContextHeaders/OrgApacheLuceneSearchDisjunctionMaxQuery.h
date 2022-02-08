// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDISJUNCTIONMAXQUERY_H
#define ORGAPACHELUCENESEARCHDISJUNCTIONMAXQUERY_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchQuery.h"
#import "JavaUtilArrayList.h"
#import "JavaLangIterable-Protocol.h"

@interface OrgApacheLuceneSearchDisjunctionMaxQuery : OrgApacheLuceneSearchQuery <JavaLangIterable>

 {
    JavaUtilArrayList *disjuncts_;
    float tieBreakerMultiplier_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithFloat:(float)arg0 ;
-(id)initWithJavaUtilCollection:(id)arg0 withFloat:(float)arg1 ;
-(void)addWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(void)addWithJavaUtilCollection:(id)arg0 ;
-(id)iterator;
-(id)getDisjuncts;
-(float)getTieBreakerMultiplier;
-(id)createWeightWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)rewriteWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(id)clone;
-(id)toStringWithNSString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif