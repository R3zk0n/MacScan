// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILZIPINFLATER_H
#define JAVAUTILZIPINFLATER_H


#import <Foundation/Foundation.h>

#import "DalvikSystemCloseGuard.h"

@interface JavaUtilZipInflater : NSObject {
    int inLength_;
    int inRead_;
    BOOL finished_;
    BOOL needsDictionary_;
    NSInteger streamHandle_;
    NSInteger inBuffer_;
    DalvikSystemCloseGuard *guard_;
}




-(id)init;
-(id)initWithBoolean:(BOOL)arg0 ;
-(NSInteger)createStreamWithBoolean:(BOOL)arg0 ;
-(void)end;
-(void)endImplWithLong:(NSInteger)arg0 ;
-(void)dealloc;
-(BOOL)finished;
-(int)getAdler;
-(int)getAdlerImplWithLong:(NSInteger)arg0 ;
-(NSInteger)getBytesRead;
-(NSInteger)getBytesWritten;
-(int)getRemaining;
-(int)getCurrentOffset;
-(int)getTotalIn;
-(NSInteger)getTotalInImplWithLong:(NSInteger)arg0 ;
-(int)getTotalOut;
-(NSInteger)getTotalOutImplWithLong:(NSInteger)arg0 ;
-(int)inflateWithByteArray:(id)arg0 ;
-(int)inflateWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)inflateImplWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(BOOL)needsDictionary;
-(BOOL)needsInput;
-(void)reset;
-(void)resetImplWithLong:(NSInteger)arg0 ;
-(void)setDictionaryWithByteArray:(id)arg0 ;
-(void)setDictionaryWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)setDictionaryImplWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(void)setInputWithByteArray:(id)arg0 ;
-(void)setInputWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)setInputImplWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(int)setFileInputWithJavaIoFileDescriptor:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(int)setFileInputImplWithJavaIoFileDescriptor:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(void)checkOpen;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif