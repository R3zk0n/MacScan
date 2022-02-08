// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTERMCOLLECTINGREWRITE_TERMCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTERMCOLLECTINGREWRITE_TERMCOLLECTOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexLeafReaderContext.h"
#import "OrgApacheLuceneIndexIndexReaderContext.h"
#import "OrgApacheLuceneUtilAttributeSource.h"

@interface OrgApacheLuceneSearchTermCollectingRewrite_TermCollector : NSObject {
    OrgApacheLuceneIndexLeafReaderContext *readerContext_;
    OrgApacheLuceneIndexIndexReaderContext *topReaderContext_;
    OrgApacheLuceneUtilAttributeSource *attributes_;
}




-(void)setReaderContextWithOrgApacheLuceneIndexIndexReaderContext:(id)arg0 withOrgApacheLuceneIndexLeafReaderContext:(id)arg1 ;
-(id)init;
-(void)dealloc;


@end


#endif