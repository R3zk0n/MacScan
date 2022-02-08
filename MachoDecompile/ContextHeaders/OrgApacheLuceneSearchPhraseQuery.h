// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHPHRASEQUERY_H
#define ORGAPACHELUCENESEARCHPHRASEQUERY_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchQuery.h"
#import "JavaUtilList-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneSearchPhraseQuery : OrgApacheLuceneSearchQuery {
    BOOL mutable__;
    int slop_;
    NSString *field_;
    id<JavaUtilList> *terms_;
    id<JavaUtilList> *positions_;
}




-(id)initWithInt:(int)arg0 withOrgApacheLuceneIndexTermArray:(id)arg1 withIntArray:(id)arg2 ;
-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withNSStringArray:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withNSStringArray:(id)arg1 ;
-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withOrgApacheLuceneUtilBytesRefArray:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withOrgApacheLuceneUtilBytesRefArray:(id)arg1 ;
-(int)getSlop;
-(id)getTerms;
-(id)getPositions;
-(id)rewriteWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(id)createWeightWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)toStringWithNSString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(void)ensureMutableWithNSString:(id)arg0 ;
-(void)setSlopWithInt:(int)arg0 ;
-(void)addWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(void)addWithOrgApacheLuceneIndexTerm:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif