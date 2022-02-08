// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSNORMSCONSUMER_$1_H
#define ORGAPACHELUCENECODECSNORMSCONSUMER_$1_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexMergeState.h"
#import "JavaLangIterable-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneCodecsNormsConsumer_$1 : NSObject <JavaLangIterable>

 {
    id<JavaUtilList> *val$toMerge_;
    OrgApacheLuceneIndexMergeState *val$mergeState_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)iterator;
-(id)initWithJavaUtilList:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif