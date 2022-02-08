// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETURLCONNECTION_H
#define JAVANETURLCONNECTION_H


#import <Foundation/Foundation.h>

#import "JavaNetURL.h"
#import "JavaNetContentHandler.h"

@interface JavaNetURLConnection : NSObject {
    JavaNetURL *url_;
    JavaNetContentHandler *defaultHandler_;
    NSInteger ifModifiedSince_;
    BOOL useCaches_;
    BOOL connected_;
    BOOL doOutput_;
    BOOL doInput_;
    BOOL allowUserInteraction_;
    NSString *contentType_;
    NSInteger lastModified_;
    int readTimeout_;
    int connectTimeout_;
}




-(id)initWithJavaNetURL:(id)arg0 ;
-(void)connect;
-(BOOL)getAllowUserInteraction;
-(id)getContent;
-(id)getContentWithIOSClassArray:(id)arg0 ;
-(id)getContentEncoding;
-(id)getContentHandlerWithNSString:(id)arg0 ;
-(int)getContentLength;
-(NSInteger)getContentLengthLong;
-(id)getContentType;
-(NSInteger)getDate;
-(BOOL)getDefaultUseCaches;
-(BOOL)getDoInput;
-(BOOL)getDoOutput;
-(NSInteger)getExpiration;
-(id)getHeaderFieldWithInt:(int)arg0 ;
-(id)getHeaderFields;
-(id)getRequestProperties;
-(void)checkNotConnected;
-(void)addRequestPropertyWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)getHeaderFieldWithNSString:(id)arg0 ;
-(NSInteger)getHeaderFieldDateWithNSString:(id)arg0 withLong:(NSInteger)arg1 ;
-(int)getHeaderFieldIntWithNSString:(id)arg0 withInt:(int)arg1 ;
-(NSInteger)getHeaderFieldLongWithNSString:(id)arg0 withLong:(NSInteger)arg1 ;
-(id)getHeaderFieldKeyWithInt:(int)arg0 ;
-(NSInteger)getIfModifiedSince;
-(id)getInputStream;
-(NSInteger)getLastModified;
-(id)getOutputStream;
-(id)getPermission;
-(id)getRequestPropertyWithNSString:(id)arg0 ;
-(id)getURL;
-(BOOL)getUseCaches;
-(id)parseTypeStringWithNSString:(id)arg0 ;
-(void)setAllowUserInteractionWithBoolean:(BOOL)arg0 ;
-(void)setDefaultUseCachesWithBoolean:(BOOL)arg0 ;
-(void)setDoInputWithBoolean:(BOOL)arg0 ;
-(void)setDoOutputWithBoolean:(BOOL)arg0 ;
-(void)setIfModifiedSinceWithLong:(NSInteger)arg0 ;
-(void)setRequestPropertyWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)setUseCachesWithBoolean:(BOOL)arg0 ;
-(void)setConnectTimeoutWithInt:(int)arg0 ;
-(int)getConnectTimeout;
-(void)setReadTimeoutWithInt:(int)arg0 ;
-(int)getReadTimeout;
-(id)description;
-(void)dealloc;
+(BOOL)getDefaultAllowUserInteraction;
+(id)getDefaultRequestPropertyWithNSString:(id)arg0 ;
+(id)getFileNameMap;
+(id)guessContentTypeFromNameWithNSString:(id)arg0 ;
+(id)guessContentTypeFromStreamWithJavaIoInputStream:(id)arg0 ;
+(void)setContentHandlerFactoryWithJavaNetContentHandlerFactory:(id)arg0 ;
+(void)setDefaultAllowUserInteractionWithBoolean:(BOOL)arg0 ;
+(void)setDefaultRequestPropertyWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(void)setFileNameMapWithJavaNetFileNameMap:(id)arg0 ;
+(void)initialize;
+(id)__annotations_getDefaultRequestPropertyWithNSString_;
+(id)__annotations_setDefaultRequestPropertyWithNSString_withNSString_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif