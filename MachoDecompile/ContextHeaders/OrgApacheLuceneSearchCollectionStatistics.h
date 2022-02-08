// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCOLLECTIONSTATISTICS_H
#define ORGAPACHELUCENESEARCHCOLLECTIONSTATISTICS_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneSearchCollectionStatistics : NSObject {
    NSString *field_;
    NSInteger maxDoc_;
    NSInteger docCount_;
    NSInteger sumTotalTermFreq_;
    NSInteger sumDocFreq_;
}




-(id)initWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 withLong:(NSInteger)arg3 withLong:(NSInteger)arg4 ;
-(id)field;
-(NSInteger)maxDoc;
-(NSInteger)docCount;
-(NSInteger)sumTotalTermFreq;
-(NSInteger)sumDocFreq;
-(void)dealloc;


@end


#endif