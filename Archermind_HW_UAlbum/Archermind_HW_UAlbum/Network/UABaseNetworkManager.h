//
//  UABaseNetworkManager.h
//  Archermind_HW_UAlbum
//
//  Created by Yana on 2018/11/25.
//  Copyright © 2018年 Archermind. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface UABaseNetworkManager : AFHTTPSessionManager
+ (id)shareInstance;
+ (NSString *)requestGetURL:(NSString *)url params:(NSDictionary *)params;
- (void)requestPOST:(NSString *)URLString
         parameters:(id)parameters
            success:(void (^)(id responseObject))success
            failure:(void (^)(NSError *error))failure;
- (void)requestGET:(NSString *)URLString
        parameters:(id)parameters
           success:(void (^)(id responseObject))success
           failure:(void (^)(NSError *error))failure;
- (void)requestUploadFile:(NSString *)URLString
                  FileUrl:(NSURL *)fileUrl
                 FileName:(NSString *)fileName
               parameters:(id)parameters
                  success:(void (^)(id responseObject))success
                  failure:(void (^)(NSError *error))failure;

@end

NS_ASSUME_NONNULL_END
