// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHPHRASEQUERY_BUILDER_H
#define ORGAPACHELUCENESEARCHPHRASEQUERY_BUILDER_H


#import <Foundation/Foundation.h>

#import "JavaUtilList-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneSearchPhraseQuery_Builder : NSObject {
    int slop_;
    id<JavaUtilList> *terms_;
    id<JavaUtilList> *positions_;
}




-(id)init;
-(id)setSlopWithInt:(int)arg0 ;
-(id)addWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(id)addWithOrgApacheLuceneIndexTerm:(id)arg0 withInt:(int)arg1 ;
-(id)build;
-(void)dealloc;


@end


#endif