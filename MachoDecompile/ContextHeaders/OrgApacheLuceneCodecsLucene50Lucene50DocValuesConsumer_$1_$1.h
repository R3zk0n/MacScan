// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESCONSUMER_$1_$1_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESCONSUMER_$1_$1_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsLucene50Lucene50DocValuesConsumer_$1.h"
#import "OrgApacheLuceneUtilLongsRef.h"
#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilIterator-Protocol.h"
#import "JavaUtilIterator-Protocol.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesConsumer_$1_$1 : NSObject <JavaUtilIterator>

 {
    OrgApacheLuceneCodecsLucene50Lucene50DocValuesConsumer_$1 *this$0_;
    id<JavaUtilIterator> *val$valueCountIterator_;
    OrgApacheLuceneUtilLongsRef *val$docValues_;
    id<JavaUtilIterator> *val$valueIterator_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(id)initWithOrgApacheLuceneCodecsLucene50Lucene50DocValuesConsumer_$1:(id)arg0 withJavaUtilIterator:(id)arg1 withOrgApacheLuceneUtilLongsRef:(id)arg2 withJavaUtilIterator:(id)arg3 ;
-(void)dealloc;


@end


#endif