#ifndef _CISCO_IOS_XR_MAN_IPSLA_CFG_1_
#define _CISCO_IOS_XR_MAN_IPSLA_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_man_ipsla_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_ipsla_cfg {


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address : public ydk::Entity
{
    public:
        RemoteIpv4Address();
        ~RemoteIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remotev4_address; //type: string
        class RemotePortNumbers; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers> remote_port_numbers;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers : public ydk::Entity
{
    public:
        RemotePortNumbers();
        ~RemotePortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemotePortNumber; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber

        ydk::YList remote_port_number;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber : public ydk::Entity
{
    public:
        RemotePortNumber();
        ~RemotePortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_port; //type: uint16
        class VrfNames; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames> vrf_names;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames : public ydk::Entity
{
    public:
        VrfNames();
        ~VrfNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfName; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName

        ydk::YList vrf_name;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName : public ydk::Entity
{
    public:
        VrfName();
        ~VrfName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string

}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses : public ydk::Entity
{
    public:
        RemoteIpv6Addresses();
        ~RemoteIpv6Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteIpv6Address; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address

        ydk::YList remote_ipv6_address;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address : public ydk::Entity
{
    public:
        RemoteIpv6Address();
        ~RemoteIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remotev6_address; //type: string
        class RemotePortNumbers; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers> remote_port_numbers;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers : public ydk::Entity
{
    public:
        RemotePortNumbers();
        ~RemotePortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemotePortNumber; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber

        ydk::YList remote_port_number;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber : public ydk::Entity
{
    public:
        RemotePortNumber();
        ~RemotePortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_port; //type: uint16
        class VrfNames; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames> vrf_names;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames : public ydk::Entity
{
    public:
        VrfNames();
        ~VrfNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfName; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName

        ydk::YList vrf_name;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName : public ydk::Entity
{
    public:
        VrfName();
        ~VrfName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string

}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv6Addresses::LocalIpv6Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses : public ydk::Entity
{
    public:
        LocalIpv4Addresses();
        ~LocalIpv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalIpv4Address; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address

        ydk::YList local_ipv4_address;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address : public ydk::Entity
{
    public:
        LocalIpv4Address();
        ~LocalIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf localv4_address; //type: string
        class LocalPortNumbers; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers> local_port_numbers;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers : public ydk::Entity
{
    public:
        LocalPortNumbers();
        ~LocalPortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalPortNumber; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber

        ydk::YList local_port_number;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber : public ydk::Entity
{
    public:
        LocalPortNumber();
        ~LocalPortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_port; //type: uint16
        class RemoteIp; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp> remote_ip;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp : public ydk::Entity
{
    public:
        RemoteIp();
        ~RemoteIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteIpv4Addresses; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses
        class RemoteIpv6Addresses; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses> remote_ipv4_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses> remote_ipv6_addresses;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses : public ydk::Entity
{
    public:
        RemoteIpv4Addresses();
        ~RemoteIpv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteIpv4Address; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address

        ydk::YList remote_ipv4_address;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address : public ydk::Entity
{
    public:
        RemoteIpv4Address();
        ~RemoteIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remotev4_address; //type: string
        class RemotePortNumbers; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers> remote_port_numbers;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers : public ydk::Entity
{
    public:
        RemotePortNumbers();
        ~RemotePortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemotePortNumber; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber

        ydk::YList remote_port_number;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber : public ydk::Entity
{
    public:
        RemotePortNumber();
        ~RemotePortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_port; //type: uint16
        class VrfNames; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames> vrf_names;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames : public ydk::Entity
{
    public:
        VrfNames();
        ~VrfNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfName; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName

        ydk::YList vrf_name;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName : public ydk::Entity
{
    public:
        VrfName();
        ~VrfName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string

}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv4Addresses::RemoteIpv4Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses : public ydk::Entity
{
    public:
        RemoteIpv6Addresses();
        ~RemoteIpv6Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteIpv6Address; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address

        ydk::YList remote_ipv6_address;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address : public ydk::Entity
{
    public:
        RemoteIpv6Address();
        ~RemoteIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remotev6_address; //type: string
        class RemotePortNumbers; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers> remote_port_numbers;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers : public ydk::Entity
{
    public:
        RemotePortNumbers();
        ~RemotePortNumbers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemotePortNumber; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber

        ydk::YList remote_port_number;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber : public ydk::Entity
{
    public:
        RemotePortNumber();
        ~RemotePortNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_port; //type: uint16
        class VrfNames; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames> vrf_names;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames : public ydk::Entity
{
    public:
        VrfNames();
        ~VrfNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VrfName; //type: Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName

        ydk::YList vrf_name;
        
}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames


class Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName : public ydk::Entity
{
    public:
        VrfName();
        ~VrfName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string

}; // Ipsla::Responder::TwampLight::SessionIds::SessionId::LocalIp::LocalIpv4Addresses::LocalIpv4Address::LocalPortNumbers::LocalPortNumber::RemoteIp::RemoteIpv6Addresses::RemoteIpv6Address::RemotePortNumbers::RemotePortNumber::VrfNames::VrfName


class Ipsla::MplsDiscovery : public ydk::Entity
{
    public:
        MplsDiscovery();
        ~MplsDiscovery();

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

        class Vpn; //type: Ipsla::MplsDiscovery::Vpn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_man_ipsla_cfg::Ipsla::MplsDiscovery::Vpn> vpn;
        
}; // Ipsla::MplsDiscovery


class Ipsla::MplsDiscovery::Vpn : public ydk::Entity
{
    public:
        Vpn();
        ~Vpn();

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

        ydk::YLeaf interval; //type: uint32

}; // Ipsla::MplsDiscovery::Vpn


class Ipsla::ServerTwamp : public ydk::Entity
{
    public:
        ServerTwamp();
        ~ServerTwamp();

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

        ydk::YLeaf inactivity_timer; //type: uint32
        ydk::YLeaf port; //type: uint16

}; // Ipsla::ServerTwamp


}
}

#endif /* _CISCO_IOS_XR_MAN_IPSLA_CFG_1_ */

