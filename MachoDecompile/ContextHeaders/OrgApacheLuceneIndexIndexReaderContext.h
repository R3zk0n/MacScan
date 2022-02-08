// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXINDEXREADERCONTEXT_H
#define ORGAPACHELUCENEINDEXINDEXREADERCONTEXT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexCompositeReaderContext.h"

@interface OrgApacheLuceneIndexIndexReaderContext : NSObject {
    OrgApacheLuceneIndexCompositeReaderContext *parent_;
    BOOL isTopLevel_;
    int docBaseInParent_;
    int ordInParent_;
}




-(id)initWithOrgApacheLuceneIndexCompositeReaderContext:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;


@end


#endif