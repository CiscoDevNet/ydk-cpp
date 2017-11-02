#ifndef _CISCO_IOS_XR_ICPE_INFRA_CFG_
#define _CISCO_IOS_XR_ICPE_INFRA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_icpe_infra_cfg {

class NvSatelliteGlobal : public ydk::Entity
{
    public:
        NvSatelliteGlobal();
        ~NvSatelliteGlobal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class ChassisMac; //type: NvSatelliteGlobal::ChassisMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_cfg::NvSatelliteGlobal::ChassisMac> chassis_mac;
        
}; // NvSatelliteGlobal


class NvSatelliteGlobal::ChassisMac : public ydk::Entity
{
    public:
        ChassisMac();
        ~ChassisMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf mac1; //type: uint32
        ydk::YLeaf mac2; //type: uint32
        ydk::YLeaf mac3; //type: uint32

}; // NvSatelliteGlobal::ChassisMac

class NvSatellites : public ydk::Entity
{
    public:
        NvSatellites();
        ~NvSatellites();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class NvSatellite; //type: NvSatellites::NvSatellite

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite> > nv_satellite;
        
}; // NvSatellites


class NvSatellites::NvSatellite : public ydk::Entity
{
    public:
        NvSatellite();
        ~NvSatellite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf vrf; //type: string
        ydk::YLeaf timeout_warning; //type: uint32
        ydk::YLeaf device_name; //type: string
        ydk::YLeaf description; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf disc_timeout; //type: uint32
        ydk::YLeaf delayed_switchback; //type: uint32
        ydk::YLeaf serial_number; //type: string
        ydk::YLeaf secret; //type: string
        ydk::YLeaf ip_address; //type: string
        class UpgradeOnConnect; //type: NvSatellites::NvSatellite::UpgradeOnConnect
        class CandidateFabricPorts; //type: NvSatellites::NvSatellite::CandidateFabricPorts
        class ConnectionInfo; //type: NvSatellites::NvSatellite::ConnectionInfo
        class Redundancy; //type: NvSatellites::NvSatellite::Redundancy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite::UpgradeOnConnect> upgrade_on_connect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite::CandidateFabricPorts> candidate_fabric_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite::ConnectionInfo> connection_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite::Redundancy> redundancy;
        
}; // NvSatellites::NvSatellite


class NvSatellites::NvSatellite::UpgradeOnConnect : public ydk::Entity
{
    public:
        UpgradeOnConnect();
        ~UpgradeOnConnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf connect_type; //type: ConnectType
        ydk::YLeaf reference; //type: string
        class ConnectType;

}; // NvSatellites::NvSatellite::UpgradeOnConnect


class NvSatellites::NvSatellite::CandidateFabricPorts : public ydk::Entity
{
    public:
        CandidateFabricPorts();
        ~CandidateFabricPorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CandidateFabricPort; //type: NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_icpe_infra_cfg::NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort> > candidate_fabric_port;
        
}; // NvSatellites::NvSatellite::CandidateFabricPorts


class NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort : public ydk::Entity
{
    public:
        CandidateFabricPort();
        ~CandidateFabricPort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_type; //type: string
        ydk::YLeaf slot; //type: uint32
        ydk::YLeaf sub_slot; //type: uint32
        ydk::YLeaf port_range; //type: string

}; // NvSatellites::NvSatellite::CandidateFabricPorts::CandidateFabricPort


class NvSatellites::NvSatellite::ConnectionInfo : public ydk::Entity
{
    public:
        ConnectionInfo();
        ~ConnectionInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf password; //type: string

}; // NvSatellites::NvSatellite::ConnectionInfo


class NvSatellites::NvSatellite::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_priority; //type: uint32

}; // NvSatellites::NvSatellite::Redundancy

class NvSatellites::NvSatellite::UpgradeOnConnect::ConnectType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on_connection;
        static const ydk::Enum::YLeaf on_first_connection;

};


}
}

#endif /* _CISCO_IOS_XR_ICPE_INFRA_CFG_ */

