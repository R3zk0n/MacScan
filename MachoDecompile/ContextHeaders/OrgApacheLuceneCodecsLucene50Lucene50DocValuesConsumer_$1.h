// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESCONSUMER_$1_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESCONSUMER_$1_H


#import <Foundation/Foundation.h>

#import "JavaLangIterable-Protocol.h"
#import "JavaLangIterable-Protocol.h"
#import "JavaLangIterable-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesConsumer_$1 : NSObject <JavaLangIterable>

 {
    id<JavaLangIterable> *val$docToValueCount_;
    id<JavaLangIterable> *val$values_;
    id<JavaUtilMap> *val$setIds_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)iterator;
-(id)initWithJavaLangIterable:(id)arg0 withJavaLangIterable:(id)arg1 withJavaUtilMap:(id)arg2 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif