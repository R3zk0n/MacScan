// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSNORMSCONSUMER_H
#define ORGAPACHELUCENECODECSNORMSCONSUMER_H


#import <Foundation/Foundation.h>

#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneCodecsNormsConsumer : NSObject <JavaIoCloseable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)mergeWithOrgApacheLuceneIndexMergeState:(id)arg0 ;
-(void)mergeNormsFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 withJavaUtilList:(id)arg2 ;


@end


#endif