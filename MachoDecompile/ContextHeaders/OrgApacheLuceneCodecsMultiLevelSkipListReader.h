// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSMULTILEVELSKIPLISTREADER_H
#define ORGAPACHELUCENECODECSMULTILEVELSKIPLISTREADER_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "IOSObjectArray.h"
#import "IOSLongArray.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneCodecsMultiLevelSkipListReader : NSObject <JavaIoCloseable>

 {
    int maxNumberOfSkipLevels_;
    IOSIntArray *skipDoc_;
    int numberOfSkipLevels_;
    int numberOfLevelsToBuffer_;
    int docCount_;
    IOSObjectArray *skipStream_;
    IOSLongArray *skipPointer_;
    IOSIntArray *skipInterval_;
    IOSIntArray *numSkipped_;
    int lastDoc_;
    IOSLongArray *childPointer_;
    NSInteger lastChildPointer_;
    BOOL inputIsBuffered_;
    int skipMultiplier_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)getDoc;
-(int)skipToWithInt:(int)arg0 ;
-(BOOL)loadNextSkipWithInt:(int)arg0 ;
-(void)seekChildWithInt:(int)arg0 ;
-(void)close;
-(void)init__WithLong:(NSInteger)arg0 withInt:(int)arg1 ;
-(void)loadSkipLevels;
-(void)setLastSkipDataWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif