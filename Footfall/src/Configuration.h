// * Name: Configuration.h
// * Project: Footfall
// * Author: David Haylock
// * Creation Date: 13/02/2017
// * Copyright: (c) 2017 by Watershed Arts Trust Ltd.

#ifndef Configuration_h
#define Configuration_h

struct Camera_Configuration
{
	int camerawidth;
	int cameraheight;
	
	int history;
	int mogThreshold;
	int dilateAmount;
	int erodeAmount;
	int blur;
	float shadowPixelRatio;
	
	bool bTrackShadows;
	bool bFlipH;
	bool bFlipV;
	
	bool bUseMask;
	vector<ofPoint> maskCoord;
	
};


struct Tracking_Configuration
{
	int threshold;
	int minarea;
	int maxarea;
	
	float blobdyingtime;
	int persistance;
	int maxdistance;
	int minsizeone;
	int minsizetwo;
	int minsizethree;
	int history;
	
	ofPoint startPos;
	ofPoint endPos;
	
	bool flipvertically;
	int offset;
};

struct HTTP_Configuration
{
	int port;
	string postserver;
	string postextension;
	string secretkey;
	int maxretries;
};

struct Configuration
{
	bool useHttp;
	bool useCsvLogging;
	Camera_Configuration cameraConfig;
	Tracking_Configuration trackingConfig;
	HTTP_Configuration httpConfig;
};

struct Post_Data
{
	Post_Data(string count,string timestamp)
	{
		_count = count;
		_timestamp = timestamp;
	}
	
	string _count;
	string _timestamp;
};

#endif /* Configuration_h */
