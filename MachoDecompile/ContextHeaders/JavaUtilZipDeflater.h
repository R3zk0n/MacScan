// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILZIPDEFLATER_H
#define JAVAUTILZIPDEFLATER_H


#import <Foundation/Foundation.h>

#import "IOSByteArray.h"
#import "DalvikSystemCloseGuard.h"

@interface JavaUtilZipDeflater : NSObject {
    int flushParm_;
    BOOL finished_;
    int compressLevel_;
    int strategy_;
    NSInteger streamHandle_;
    NSInteger inBuffer_;
    IOSByteArray *inputBuffer_;
    int inRead_;
    int inLength_;
    DalvikSystemCloseGuard *guard_;
}




-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(int)deflateWithByteArray:(id)arg0 ;
-(int)deflateWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)deflateWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(int)deflateImplWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(int)deflateImplWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 withInt:(int)arg4 ;
-(void)end;
-(void)endImpl;
-(void)endImplWithLong:(NSInteger)arg0 ;
-(void)dealloc;
-(void)finish;
-(BOOL)finished;
-(int)getAdler;
-(int)getAdlerImplWithLong:(NSInteger)arg0 ;
-(int)getTotalIn;
-(NSInteger)getTotalInImplWithLong:(NSInteger)arg0 ;
-(int)getTotalOut;
-(NSInteger)getTotalOutImplWithLong:(NSInteger)arg0 ;
-(BOOL)needsInput;
-(void)reset;
-(void)resetImplWithLong:(NSInteger)arg0 ;
-(void)setDictionaryWithByteArray:(id)arg0 ;
-(void)setDictionaryWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)setDictionaryImplWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(void)setInputWithByteArray:(id)arg0 ;
-(void)setInputWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)setLevelsImplWithInt:(int)arg0 withInt:(int)arg1 withLong:(NSInteger)arg2 ;
-(void)setInputImplWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(void)setLevelWithInt:(int)arg0 ;
-(void)setStrategyWithInt:(int)arg0 ;
-(NSInteger)getBytesRead;
-(NSInteger)getBytesWritten;
-(NSInteger)createStreamWithInt:(int)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(void)checkOpen;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif