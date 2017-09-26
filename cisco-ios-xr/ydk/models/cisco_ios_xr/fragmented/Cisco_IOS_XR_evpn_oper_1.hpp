#ifndef _CISCO_IOS_XR_EVPN_OPER_1_
#define _CISCO_IOS_XR_EVPN_OPER_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_evpn_oper_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_evpn_oper {


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured : public ydk::Entity
{
    public:
        RdConfigured();
        ~RdConfigured();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rd; //type: L2vpnAdRd
        class Auto_; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_> auto_;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr> v4_addr;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_ : public ydk::Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf auto_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RtAuto : public ydk::Entity
{
    public:
        RtAuto();
        ~RtAuto();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport> es_import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr> v4_addr;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching : public ydk::Entity
{
    public:
        RtAutoStitching();
        ~RtAutoStitching();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport> es_import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr> v4_addr;
        
}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs


class Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr


class Evpn::Standby::EviDetail::EviChildren : public ydk::Entity
{
    public:
        EviChildren();
        ~EviChildren();

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

        class Neighbors; //type: Evpn::Standby::EviDetail::EviChildren::Neighbors
        class EthernetAutoDiscoveries; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries
        class InclusiveMulticasts; //type: Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts
        class RouteTargets; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets
        class Macs; //type: Evpn::Standby::EviDetail::EviChildren::Macs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries> ethernet_auto_discoveries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts> inclusive_multicasts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs> macs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Neighbors> neighbors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets> route_targets;
        
}; // Evpn::Standby::EviDetail::EviChildren


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries : public ydk::Entity
{
    public:
        EthernetAutoDiscoveries();
        ~EthernetAutoDiscoveries();

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

        class EthernetAutoDiscovery; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery> > ethernet_auto_discovery;
        
}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery : public ydk::Entity
{
    public:
        EthernetAutoDiscovery();
        ~EthernetAutoDiscovery();

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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf esi1; //type: string
        ydk::YLeaf esi2; //type: string
        ydk::YLeaf esi3; //type: string
        ydk::YLeaf esi4; //type: string
        ydk::YLeaf esi5; //type: string
        ydk::YLeaf ethernet_tag; //type: int32
        ydk::YLeaf ethernet_vpnid; //type: uint32
        ydk::YLeaf type; //type: L2vpnEvpn
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf local_next_hop; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf is_local_ead; //type: boolean
        ydk::YLeaf encap; //type: uint8
        ydk::YLeaf redundancy_single_active; //type: boolean
        ydk::YLeaf num_paths; //type: uint32
        class EthernetSegmentIdentifier; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier> > ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer> > path_buffer;
        
}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier : public ydk::Entity
{
    public:
        EthernetSegmentIdentifier();
        ~EthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetSegmentIdentifier


class Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer


class Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts : public ydk::Entity
{
    public:
        InclusiveMulticasts();
        ~InclusiveMulticasts();

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

        class InclusiveMulticast; //type: Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast> > inclusive_multicast;
        
}; // Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts


class Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast : public ydk::Entity
{
    public:
        InclusiveMulticast();
        ~InclusiveMulticast();

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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf ethernet_tag; //type: int32
        ydk::YLeaf originating_ip; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf originating_ip_xr; //type: string
        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf is_local_entry; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf encap_type; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast


class Evpn::Standby::EviDetail::EviChildren::Macs : public ydk::Entity
{
    public:
        Macs();
        ~Macs();

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

        class Mac; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs::Mac> > mac;
        
}; // Evpn::Standby::EviDetail::EviChildren::Macs


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac : public ydk::Entity
{
    public:
        Mac();
        ~Mac();

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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf ethernet_tag; //type: int32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf ethernet_tag_xr; //type: uint32
        ydk::YLeaf mac_address_xr; //type: string
        ydk::YLeaf ip_address_xr; //type: string
        ydk::YLeaf local_label; //type: uint32
        ydk::YLeaf num_paths; //type: uint32
        ydk::YLeaf is_local_mac; //type: boolean
        ydk::YLeaf is_proxy_entry; //type: boolean
        ydk::YLeaf is_remote_mac; //type: boolean
        ydk::YLeaf soo_nexthop; //type: string
        ydk::YLeaf ipnh_address; //type: string
        ydk::YLeaf esi_port_key; //type: uint16
        ydk::YLeaf local_encap_type; //type: uint8
        ydk::YLeaf remote_encap_type; //type: uint8
        ydk::YLeaf learned_bridge_port_name; //type: string
        ydk::YLeaf local_seq_id; //type: uint32
        ydk::YLeaf remote_seq_id; //type: uint32
        ydk::YLeaf local_l3_label; //type: uint32
        ydk::YLeaf router_mac_address; //type: string
        ydk::YLeaf mac_flush_requested; //type: uint16
        ydk::YLeaf mac_flush_received; //type: uint16
        ydk::YLeaf internal_label; //type: uint32
        ydk::YLeaf resolved; //type: boolean
        ydk::YLeaf local_is_static; //type: boolean
        ydk::YLeaf remote_is_static; //type: boolean
        class LocalEthernetSegmentIdentifier; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier
        class RemoteEthernetSegmentIdentifier; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier
        class PathBuffer; //type: Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier> > local_ethernet_segment_identifier;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer> > path_buffer;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier> > remote_ethernet_segment_identifier;
        
}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier : public ydk::Entity
{
    public:
        LocalEthernetSegmentIdentifier();
        ~LocalEthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::LocalEthernetSegmentIdentifier


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer : public ydk::Entity
{
    public:
        PathBuffer();
        ~PathBuffer();

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

        ydk::YLeaf next_hop; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf srte_tunnel; //type: string

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::PathBuffer


class Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier : public ydk::Entity
{
    public:
        RemoteEthernetSegmentIdentifier();
        ~RemoteEthernetSegmentIdentifier();

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

        ydk::YLeaf entry; //type: uint8

}; // Evpn::Standby::EviDetail::EviChildren::Macs::Mac::RemoteEthernetSegmentIdentifier


class Evpn::Standby::EviDetail::EviChildren::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor> > neighbor;
        
}; // Evpn::Standby::EviDetail::EviChildren::Neighbors


class Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf neighbor_ip; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf neighbor; //type: string

}; // Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor


class Evpn::Standby::EviDetail::EviChildren::RouteTargets : public ydk::Entity
{
    public:
        RouteTargets();
        ~RouteTargets();

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

        class RouteTarget; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget> > route_target;
        
}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget : public ydk::Entity
{
    public:
        RouteTarget();
        ~RouteTarget();

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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf type; //type: BgpRouteTarget
        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf addr_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf route_target_role; //type: L2vpnAdRtRole
        ydk::YLeaf route_target_stitching; //type: boolean
        class RouteTarget_; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_> route_target;
        
}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_ : public ydk::Entity
{
    public:
        RouteTarget_();
        ~RouteTarget_();

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

        ydk::YLeaf rt; //type: L2vpnAdRt
        class TwoByteAs; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs
        class FourByteAs; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs
        class V4Addr; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr
        class EsImport; //type: Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport> es_import;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs> four_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs> two_byte_as;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr> v4_addr;
        
}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport : public ydk::Entity
{
    public:
        EsImport();
        ~EsImport();

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

        ydk::YLeaf high_bytes; //type: uint32
        ydk::YLeaf low_bytes; //type: uint16

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs : public ydk::Entity
{
    public:
        FourByteAs();
        ~FourByteAs();

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

        ydk::YLeaf four_byte_as; //type: uint32
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs : public ydk::Entity
{
    public:
        TwoByteAs();
        ~TwoByteAs();

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

        ydk::YLeaf two_byte_as; //type: uint16
        ydk::YLeaf four_byte_index; //type: uint32

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs


class Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr : public ydk::Entity
{
    public:
        V4Addr();
        ~V4Addr();

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

        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf two_byte_index; //type: uint16

}; // Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr


class Evpn::Standby::Evis : public ydk::Entity
{
    public:
        Evis();
        ~Evis();

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

        class Evi; //type: Evpn::Standby::Evis::Evi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_evpn_oper::Evpn::Standby::Evis::Evi> > evi;
        
}; // Evpn::Standby::Evis


class Evpn::Standby::Evis::Evi : public ydk::Entity
{
    public:
        Evi();
        ~Evi();

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

        ydk::YLeaf evi; //type: int32
        ydk::YLeaf evi_xr; //type: uint32
        ydk::YLeaf bd_name; //type: string
        ydk::YLeaf type; //type: L2vpnEvpn

}; // Evpn::Standby::Evis::Evi


class Evpn::Standby::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

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

        ydk::YLeaf router_id; //type: string
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf ev_is; //type: uint32
        ydk::YLeaf local_mac_routes; //type: uint32
        ydk::YLeaf local_ipv4_mac_routes; //type: uint32
        ydk::YLeaf local_ipv6_mac_routes; //type: uint32
        ydk::YLeaf es_global_mac_routes; //type: uint32
        ydk::YLeaf remote_mac_routes; //type: uint32
        ydk::YLeaf remote_soo_mac_routes; //type: uint32
        ydk::YLeaf remote_ipv4_mac_routes; //type: uint32
        ydk::YLeaf remote_ipv6_mac_routes; //type: uint32
        ydk::YLeaf local_imcast_routes; //type: uint32
        ydk::YLeaf remote_imcast_routes; //type: uint32
        ydk::YLeaf labels; //type: uint32
        ydk::YLeaf es_entries; //type: uint32
        ydk::YLeaf neighbor_entries; //type: uint32
        ydk::YLeaf local_ead_routes; //type: uint32
        ydk::YLeaf remote_ead_routes; //type: uint32
        ydk::YLeaf global_source_mac; //type: string
        ydk::YLeaf peering_time; //type: uint32
        ydk::YLeaf recovery_time; //type: uint32
        ydk::YLeaf mac_secure_move_count; //type: uint32
        ydk::YLeaf mac_secure_move_interval; //type: uint32
        ydk::YLeaf mac_secure_freeze_time; //type: uint32
        ydk::YLeaf mac_secure_retry_count; //type: uint32
        ydk::YLeaf cost_out; //type: boolean
        ydk::YLeaf startup_cost_in_time; //type: uint32
        ydk::YLeaf l2rib_throttle; //type: boolean
        ydk::YLeaf logging_df_election_enabled; //type: boolean

}; // Evpn::Standby::Summary


}
}

#endif /* _CISCO_IOS_XR_EVPN_OPER_1_ */

