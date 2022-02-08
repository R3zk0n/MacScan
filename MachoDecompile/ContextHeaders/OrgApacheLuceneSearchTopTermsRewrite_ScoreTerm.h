// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPTERMSREWRITE_SCORETERM_H
#define ORGAPACHELUCENESEARCHTOPTERMSREWRITE_SCORETERM_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilBytesRefBuilder.h"
#import "OrgApacheLuceneIndexTermContext.h"
#import "JavaLangComparable-Protocol.h"

@interface OrgApacheLuceneSearchTopTermsRewrite_ScoreTerm : NSObject <JavaLangComparable>

 {
    OrgApacheLuceneUtilBytesRefBuilder *bytes_;
    float boost_;
    OrgApacheLuceneIndexTermContext *termState_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneIndexTermContext:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
-(void)dealloc;


@end


#endif