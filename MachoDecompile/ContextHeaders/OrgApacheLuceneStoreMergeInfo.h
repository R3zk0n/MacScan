// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREMERGEINFO_H
#define ORGAPACHELUCENESTOREMERGEINFO_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneStoreMergeInfo : NSObject {
    int totalMaxDoc_;
    NSInteger estimatedMergeBytes_;
    BOOL isExternal_;
    int mergeMaxNumSegments_;
}




-(id)initWithInt:(int)arg0 withLong:(NSInteger)arg1 withBoolean:(BOOL)arg2 withInt:(int)arg3 ;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif