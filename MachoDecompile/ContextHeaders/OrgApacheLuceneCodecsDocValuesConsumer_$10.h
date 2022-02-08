// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSDOCVALUESCONSUMER_$10_H
#define ORGAPACHELUCENECODECSDOCVALUESCONSUMER_$10_H


#import <Foundation/Foundation.h>

#import "JavaLangIterable-Protocol.h"
#import "JavaLangIterable-Protocol.h"
#import "JavaLangIterable-Protocol.h"

@interface OrgApacheLuceneCodecsDocValuesConsumer_$10 : NSObject <JavaLangIterable>

 {
    id<JavaLangIterable> *val$docToValueCount_;
    id<JavaLangIterable> *val$values_;
    NSNumber *val$missingValue_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)iterator;
-(id)initWithJavaLangIterable:(id)arg0 withJavaLangIterable:(id)arg1 withNSNumber:(id)arg2 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif