// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETURL_H
#define JAVANETURL_H


#import <Foundation/Foundation.h>

#import "JavaNetURLStreamHandler.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaNetURL : NSObject <JavaIoSerializable>

 {
    JavaNetURLStreamHandler *streamHandler_;
    NSString *protocol_;
    NSString *authority_;
    NSString *host_;
    int port_;
    NSString *file_;
    NSString *ref_;
    NSString *userInfo_;
    NSString *path_;
    NSString *query_;
    int hashCode_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(id)initWithJavaNetURL:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithJavaNetURL:(id)arg0 withNSString:(id)arg1 withJavaNetURLStreamHandler:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withNSString:(id)arg3 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withNSString:(id)arg3 withJavaNetURLStreamHandler:(id)arg4 ;
-(void)fixURLWithBoolean:(BOOL)arg0 ;
-(void)setWithNSString:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withNSString:(id)arg3 withNSString:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sameFileWithJavaNetURL:(id)arg0 ;
-(void)setupStreamHandler;
-(id)getContent;
-(id)getContentWithIOSClassArray:(id)arg0 ;
-(id)openStream;
-(id)openConnection;
-(id)openConnectionWithJavaNetProxy:(id)arg0 ;
-(id)toURI;
-(id)toURILenient;
-(id)toExternalForm;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(int)getEffectivePort;
-(id)getProtocol;
-(id)getAuthority;
-(id)getUserInfo;
-(id)getHost;
-(int)getPort;
-(int)getDefaultPort;
-(id)getFile;
-(id)getPath;
-(id)getQuery;
-(id)getRef;
-(void)setWithNSString:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withNSString:(id)arg6 withNSString:(id)arg7 ;
-(void)dealloc;
+(void)setURLStreamHandlerFactoryWithJavaNetURLStreamHandlerFactory:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif