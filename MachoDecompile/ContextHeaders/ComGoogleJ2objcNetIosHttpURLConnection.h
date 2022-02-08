// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMGOOGLEJ2OBJCNETIOSHTTPURLCONNECTION_H
#define COMGOOGLEJ2OBJCNETIOSHTTPURLCONNECTION_H



#import "JavaNetHttpURLConnection.h"
#import "JavaIoOutputStream.h"
#import "JavaIoInputStream.h"
#import "JavaIoIOException.h"
#import "JavaUtilList-Protocol.h"

@interface ComGoogleJ2objcNetIosHttpURLConnection : JavaNetHttpURLConnection {
    JavaIoOutputStream *nativeRequestData_;
    JavaIoInputStream *responseDataStream_;
    JavaIoInputStream *errorDataStream_;
    id<JavaUtilList> *headers_;
    int contentLength_;
    JavaIoIOException *responseException_;
}




-(id)initWithJavaNetURL:(id)arg0 ;
-(void)disconnect;
-(BOOL)usingProxy;
-(id)getInputStream;
-(void)connect;
-(id)getHeaderFields;
-(id)getHeaderFieldsDoNotForceResponse;
-(id)getResponseHeaders;
-(id)getHeaderFieldWithInt:(int)arg0 ;
-(id)getHeaderFieldWithNSString:(id)arg0 ;
-(id)getHeaderFieldDoNotForceResponseWithNSString:(id)arg0 ;
-(NSInteger)getHeaderFieldDateWithNSString:(id)arg0 withLong:(NSInteger)arg1 ;
-(id)getHeaderFieldKeyWithInt:(int)arg0 ;
-(int)getHeaderFieldIntWithNSString:(id)arg0 withInt:(int)arg1 ;
-(NSInteger)getHeaderFieldLongWithNSString:(id)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)getHeaderFieldLongDoNotForceResponseWithNSString:(id)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)headerValueToLongWithNSString:(id)arg0 withLong:(NSInteger)arg1 ;
-(id)getRequestProperties;
-(void)setRequestPropertyWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)addRequestPropertyWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)getRequestPropertyWithNSString:(id)arg0 ;
-(id)getErrorStream;
-(NSInteger)getIfModifiedSince;
-(void)setIfModifiedSinceWithLong:(NSInteger)arg0 ;
-(id)getOutputStream;
-(void)getResponse;
-(int)getResponseCode;
-(void)makeSynchronousRequest;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)addHeaderWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)removeHeaderWithNSString:(id)arg0 ;
-(void)setHeaderWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(void)dealloc;
+(id)getResponseStatusTextWithInt:(int)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif