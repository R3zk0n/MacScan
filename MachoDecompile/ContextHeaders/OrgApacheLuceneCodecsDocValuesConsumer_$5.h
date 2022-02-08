// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSDOCVALUESCONSUMER_$5_H
#define ORGAPACHELUCENECODECSDOCVALUESCONSUMER_$5_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexMultiDocValues_OrdinalMap.h"
#import "IOSObjectArray.h"
#import "JavaLangIterable-Protocol.h"

@interface OrgApacheLuceneCodecsDocValuesConsumer_$5 : NSObject <JavaLangIterable>

 {
    OrgApacheLuceneIndexMultiDocValues_OrdinalMap *val$map_;
    IOSObjectArray *val$dvs_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)iterator;
-(id)initWithOrgApacheLuceneIndexMultiDocValues_OrdinalMap:(id)arg0 withOrgApacheLuceneIndexSortedDocValuesArray:(id)arg1 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif