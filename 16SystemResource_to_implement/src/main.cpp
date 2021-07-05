#include <iostream>
#include <rpos/features/system_resource/feature.h>

int main(int argc, char**argv)
{
	rpos::features::SystemResource sys_resource;

	/* method */
	int battery_percent = sys_resource.getBatteryPercentage();
	bool is_charging = sys_resource.getBatteryIsCharging();
	bool is_power_connect = sys_resource.getDCIsConnected();
	rpos::features::SystemResource::PowerStatus power_status = sys_resource.getPowerStatus();

	void wakeUp();
	int temperature = sys_resource.getBoardTemperature();
	std::string sdp_version = sys_resource.getSDPVersion();

	rpos::features::system_resource::LaserScan get_laser_scan = sys_resource.getLaserScan();
	bool reset = sys_resource.restartModule( rpos::features::system_resource::RestartMode mode = rpos::features::system_resource::RestartModeSoft );//RestartModeHard
	bool set_param = sys_resource.setSystemParameter( const std::string& param, const std::string& value); // check sdk

	bool update = sys_resource.updateBinaryConfig(const std::string& param);
	bool shutdown_slamcore = sys_resource.shutdownSlamcore( const rpos::core::SlamcoreShutdonwParam& shutdownArg);
	rpos::features::system_resource::BaseHealthInfo getRobotHealth();
	void clearRobotHealth( int errorCode );

	bool configureNetwork(
		rpos::features::system_resource::NetworkMode mode,
		const std::map<std::string, std::string>& options
	)// check sdk
	std::map<std::string, std::string> getNetworkStatus();

	rpos::features::system_resource::HeartBeatToken startHeartBeat(int heartBeatTimeoutInSeconds);
	void refreshHeartBeat( rpos::features::system_resource::HeartBeatToken token)
	void stopHeartBeat( rpos::features::system_resource::HeartBeatToken token)

	void voiceRespond(); // unsupported yet

	void startFirmwareUpgrade( const std::string& filename);
	void startFirmwareUpgrade( const std::vector<uint8_t> & firmwareContent);

	void publishDepthcamFrame(
		int sensorId,
		const rpos::message::depth_camera::DepthCameraFrame& frame
	)

	std::vector<system_resource::OperationAuditLog> getOperationAuditLogs();

	int sendAndRecUserDefinedCBUSMessage(
		const void * payload,
		const size_t payloadsize,
		void * recvBuffer,
		size_t & recvDataSize
	)

	rpos::features::system_resource::LidarAutoTweakRequestResult beginLidarAutoTweak();
	rpos::features::system_resource::LidarAutoTweakStatus();
	bool acceptLidarTweakResult();
	void resetLidarTweakResult();
	void cancelLidarAutoTweak();


	return 0;
}