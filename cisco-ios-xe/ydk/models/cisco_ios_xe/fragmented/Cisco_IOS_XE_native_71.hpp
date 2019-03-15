#ifndef _CISCO_IOS_XE_NATIVE_71_
#define _CISCO_IOS_XE_NATIVE_71_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_20.hpp"
#include "Cisco_IOS_XE_native_65.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Interface::FortyGigabitEthernet::FabricDomain : public ydk::Entity
{
    public:
        FabricDomain();
        ~FabricDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IwanFabric; //type: Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric> iwan_fabric;
        
}; // Native::Interface::FortyGigabitEthernet::FabricDomain


class Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric : public ydk::Entity
{
    public:
        IwanFabric();
        ~IwanFabric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Word; //type: Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric::Word

        ydk::YList word;
        
}; // Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric


class Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric::Word : public ydk::Entity
{
    public:
        Word();
        ~Word();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        ydk::YLeaf interface_id; //type: uint8

}; // Native::Interface::FortyGigabitEthernet::FabricDomain::IwanFabric::Word


class Native::Interface::FortyGigabitEthernet::AnalysisModule : public ydk::Entity
{
    public:
        AnalysisModule();
        ~AnalysisModule();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Monitoring; //type: Native::Interface::FortyGigabitEthernet::AnalysisModule::Monitoring

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::AnalysisModule::Monitoring> monitoring;
        
}; // Native::Interface::FortyGigabitEthernet::AnalysisModule


class Native::Interface::FortyGigabitEthernet::AnalysisModule::Monitoring : public ydk::Entity
{
    public:
        Monitoring();
        ~Monitoring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string

}; // Native::Interface::FortyGigabitEthernet::AnalysisModule::Monitoring


class Native::Interface::FortyGigabitEthernet::Cts : public ydk::Entity
{
    public:
        Cts();
        ~Cts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Manual; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual
        class RoleBased; //type: Native::Interface::FortyGigabitEthernet::Cts::RoleBased

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual> manual; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::RoleBased> role_based;
        
}; // Native::Interface::FortyGigabitEthernet::Cts


class Native::Interface::FortyGigabitEthernet::Cts::Manual : public ydk::Entity
{
    public:
        Manual();
        ~Manual();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Policy; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy
        class Sap; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap
        class Propagate; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Propagate

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy> policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap> sap;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Propagate> propagate;
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy : public ydk::Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Static; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy::Static

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy::Static> static_;
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy::Static : public ydk::Entity
{
    public:
        Static();
        ~Static();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: uint16
        ydk::YLeaf trusted; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Policy::Static


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap : public ydk::Entity
{
    public:
        Sap();
        ~Sap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pmk; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk

        ydk::YList pmk;
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk : public ydk::Entity
{
    public:
        Pmk();
        ~Pmk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf word; //type: string
        class ModeList; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList> mode_list;
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList : public ydk::Entity
{
    public:
        ModeList();
        ~ModeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GcmEncrypt; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt
        class NoEncap; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt> gcm_encrypt; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap> no_encap; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt : public ydk::Entity
{
    public:
        GcmEncrypt();
        ~GcmEncrypt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac> gmac; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf null; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap : public ydk::Entity
{
    public:
        NoEncap();
        ~NoEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Gmac; //type: Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac> gmac; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac : public ydk::Entity
{
    public:
        Gmac();
        ~Gmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gcm_encrypt; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac


class Native::Interface::FortyGigabitEthernet::Cts::Manual::Propagate : public ydk::Entity
{
    public:
        Propagate();
        ~Propagate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sgt; //type: boolean

}; // Native::Interface::FortyGigabitEthernet::Cts::Manual::Propagate


class Native::Interface::FortyGigabitEthernet::Cts::RoleBased : public ydk::Entity
{
    public:
        RoleBased();
        ~RoleBased();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enforcement; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Cts::RoleBased


class Native::Interface::FortyGigabitEthernet::Udld : public ydk::Entity
{
    public:
        Udld();
        ~Udld();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Port; //type: Native::Interface::FortyGigabitEthernet::Udld::Port

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Udld::Port> port; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Udld


class Native::Interface::FortyGigabitEthernet::Udld::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aggressive; //type: empty
        ydk::YLeaf disable; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Udld::Port


class Native::Interface::FortyGigabitEthernet::Cdp : public ydk::Entity
{
    public:
        Cdp();
        ~Cdp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        class Tlv; //type: Native::Interface::FortyGigabitEthernet::Cdp::Tlv

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cdp::Tlv> tlv;
        
}; // Native::Interface::FortyGigabitEthernet::Cdp


class Native::Interface::FortyGigabitEthernet::Cdp::Tlv : public ydk::Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf server_location; //type: empty
        ydk::YLeaf location; //type: empty
        class App; //type: Native::Interface::FortyGigabitEthernet::Cdp::Tlv::App

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Cdp::Tlv::App> app; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Cdp::Tlv


class Native::Interface::FortyGigabitEthernet::Cdp::Tlv::App : public ydk::Entity
{
    public:
        App();
        ~App();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tlvtype; //type: uint16
        ydk::YLeaf value_; //type: string

}; // Native::Interface::FortyGigabitEthernet::Cdp::Tlv::App


class Native::Interface::FortyGigabitEthernet::Mvrp : public ydk::Entity
{
    public:
        Mvrp();
        ~Mvrp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mvrp; //type: empty
        class Registration; //type: Native::Interface::FortyGigabitEthernet::Mvrp::Registration
        class Timer; //type: Native::Interface::FortyGigabitEthernet::Mvrp::Timer

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mvrp::Registration> registration;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mvrp::Timer> timer;
        
}; // Native::Interface::FortyGigabitEthernet::Mvrp


class Native::Interface::FortyGigabitEthernet::Mvrp::Registration : public ydk::Entity
{
    public:
        Registration();
        ~Registration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fixed; //type: empty
        ydk::YLeaf forbidden; //type: empty
        ydk::YLeaf normal; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Mvrp::Registration


class Native::Interface::FortyGigabitEthernet::Mvrp::Timer : public ydk::Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf periodic; //type: empty
        class Join; //type: Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Join
        class Leave; //type: Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Leave
        class LeaveAll; //type: Native::Interface::FortyGigabitEthernet::Mvrp::Timer::LeaveAll

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Join> join; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Leave> leave; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Mvrp::Timer::LeaveAll> leave_all; // presence node
        
}; // Native::Interface::FortyGigabitEthernet::Mvrp::Timer


class Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Join : public ydk::Entity
{
    public:
        Join();
        ~Join();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Join


class Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Leave : public ydk::Entity
{
    public:
        Leave();
        ~Leave();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::FortyGigabitEthernet::Mvrp::Timer::Leave


class Native::Interface::FortyGigabitEthernet::Mvrp::Timer::LeaveAll : public ydk::Entity
{
    public:
        LeaveAll();
        ~LeaveAll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf y_range; //type: uint32

}; // Native::Interface::FortyGigabitEthernet::Mvrp::Timer::LeaveAll


class Native::Interface::FortyGigabitEthernet::Ntp : public ydk::Entity
{
    public:
        Ntp();
        ~Ntp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf broadcast; //type: empty
        class BroadcastOption; //type: Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption> broadcast_option;
        
}; // Native::Interface::FortyGigabitEthernet::Ntp


class Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption : public ydk::Entity
{
    public:
        BroadcastOption();
        ~BroadcastOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Broadcast; //type: Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption::Broadcast

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption::Broadcast> broadcast;
        
}; // Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption


class Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption::Broadcast : public ydk::Entity
{
    public:
        Broadcast();
        ~Broadcast();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf client; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Ntp::BroadcastOption::Broadcast


class Native::Interface::FortyGigabitEthernet::Utd : public ydk::Entity
{
    public:
        Utd();
        ~Utd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // Native::Interface::FortyGigabitEthernet::Utd


class Native::Interface::HundredGigE : public ydk::Entity
{
    public:
        HundredGigE();
        ~HundredGigE();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf description; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf keepalive; //type: boolean
        ydk::YLeaf if_state; //type: IfState
        ydk::YLeaf delay; //type: uint32
        ydk::YLeaf load_interval; //type: uint16
        ydk::YLeaf max_reserved_bandwidth; //type: uint8
        ydk::YLeaf mtu; //type: uint16
        ydk::YLeaf service_insertion; //type: ServiceInsertion
        ydk::YLeaf channel_protocol; //type: ChannelProtocol
        ydk::YLeaf duplex; //type: Duplex
        ydk::YLeaf cisco_ios_xe_ethernet_macsec; //type: empty
        ydk::YLeaf cisco_ios_xe_switch_macsec; //type: empty
        ydk::YLeaf nat66; //type: Nat66
        class SwitchportConf; //type: Native::Interface::HundredGigE::SwitchportConf
        class Switchport; //type: Native::Interface::HundredGigE::Switchport
        class StackwiseVirtual; //type: Native::Interface::HundredGigE::StackwiseVirtual
        class Arp; //type: Native::Interface::HundredGigE::Arp
        class Backup; //type: Native::Interface::HundredGigE::Backup
        class Cemoudp; //type: Native::Interface::HundredGigE::Cemoudp
        class CwsTunnel; //type: Native::Interface::HundredGigE::CwsTunnel
        class L2protocolTunnel; //type: Native::Interface::HundredGigE::L2protocolTunnel
        class Encapsulation; //type: Native::Interface::HundredGigE::Encapsulation
        class FairQueueConf; //type: Native::Interface::HundredGigE::FairQueueConf
        class FairQueue; //type: Native::Interface::HundredGigE::FairQueue
        class Flowcontrol; //type: Native::Interface::HundredGigE::Flowcontrol
        class Isis; //type: Native::Interface::HundredGigE::Isis
        class KeepaliveSettings; //type: Native::Interface::HundredGigE::KeepaliveSettings
        class Bfd; //type: Native::Interface::HundredGigE::Bfd
        class Bandwidth; //type: Native::Interface::HundredGigE::Bandwidth
        class Dampening; //type: Native::Interface::HundredGigE::Dampening
        class Domain; //type: Native::Interface::HundredGigE::Domain
        class HoldQueue; //type: Native::Interface::HundredGigE::HoldQueue
        class Mpls; //type: Native::Interface::HundredGigE::Mpls
        class IpVrf; //type: Native::Interface::HundredGigE::IpVrf
        class Vrf; //type: Native::Interface::HundredGigE::Vrf
        class Ip; //type: Native::Interface::HundredGigE::Ip
        class Ipv6; //type: Native::Interface::HundredGigE::Ipv6
        class Logging; //type: Native::Interface::HundredGigE::Logging
        class Mdix; //type: Native::Interface::HundredGigE::Mdix
        class Mop; //type: Native::Interface::HundredGigE::Mop
        class InterfaceQos; //type: Native::Interface::HundredGigE::InterfaceQos
        class Source; //type: Native::Interface::HundredGigE::Source
        class Standby; //type: Native::Interface::HundredGigE::Standby
        class AccessSession; //type: Native::Interface::HundredGigE::AccessSession
        class StormControl; //type: Native::Interface::HundredGigE::StormControl
        class Trust; //type: Native::Interface::HundredGigE::Trust
        class PriorityQueue; //type: Native::Interface::HundredGigE::PriorityQueue
        class RcvQueue; //type: Native::Interface::HundredGigE::RcvQueue
        class Peer; //type: Native::Interface::HundredGigE::Peer
        class PmPath; //type: Native::Interface::HundredGigE::PmPath
        class Power; //type: Native::Interface::HundredGigE::Power
        class CarrierDelay; //type: Native::Interface::HundredGigE::CarrierDelay
        class ChannelGroup; //type: Native::Interface::HundredGigE::ChannelGroup
        class Ethernet; //type: Native::Interface::HundredGigE::Ethernet
        class Eapol; //type: Native::Interface::HundredGigE::Eapol
        class Synchronous; //type: Native::Interface::HundredGigE::Synchronous
        class Speed; //type: Native::Interface::HundredGigE::Speed
        class Negotiation; //type: Native::Interface::HundredGigE::Negotiation
        class Plim; //type: Native::Interface::HundredGigE::Plim
        class Pppoe; //type: Native::Interface::HundredGigE::Pppoe
        class Service; //type: Native::Interface::HundredGigE::Service
        class CiscoIOSXEEthernetMacsecOption; //type: Native::Interface::HundredGigE::CiscoIOSXEEthernetMacsecOption
        class Snmp; //type: Native::Interface::HundredGigE::Snmp
        class Authentication; //type: Native::Interface::HundredGigE::Authentication
        class Mab; //type: Native::Interface::HundredGigE::Mab
        class EtAnalytics; //type: Native::Interface::HundredGigE::EtAnalytics
        class ServicePolicy; //type: Native::Interface::HundredGigE::ServicePolicy
        class Auto; //type: Native::Interface::HundredGigE::Auto
        class Datalink; //type: Native::Interface::HundredGigE::Datalink
        class Energywise; //type: Native::Interface::HundredGigE::Energywise
        class Location; //type: Native::Interface::HundredGigE::Location
        class Mac; //type: Native::Interface::HundredGigE::Mac
        class Macro; //type: Native::Interface::HundredGigE::Macro
        class DualActive; //type: Native::Interface::HundredGigE::DualActive
        class LoadBalancing; //type: Native::Interface::HundredGigE::LoadBalancing
        class VlanRange; //type: Native::Interface::HundredGigE::VlanRange
        class Switch; //type: Native::Interface::HundredGigE::Switch
        class SrrQueue; //type: Native::Interface::HundredGigE::SrrQueue
        class CiscoIOSXESwitchMacsecOption; //type: Native::Interface::HundredGigE::CiscoIOSXESwitchMacsecOption
        class Ospfv3; //type: Native::Interface::HundredGigE::Ospfv3
        class Performance; //type: Native::Interface::HundredGigE::Performance
        class Lisp; //type: Native::Interface::HundredGigE::Lisp
        class SpanningTree; //type: Native::Interface::HundredGigE::SpanningTree
        class Mka; //type: Native::Interface::HundredGigE::Mka
        class Umbrella; //type: Native::Interface::HundredGigE::Umbrella
        class Xconnect; //type: Native::Interface::HundredGigE::Xconnect
        class Evpn; //type: Native::Interface::HundredGigE::Evpn
        class Dot1x; //type: Native::Interface::HundredGigE::Dot1x
        class Crypto; //type: Native::Interface::HundredGigE::Crypto
        class Lldp; //type: Native::Interface::HundredGigE::Lldp
        class ZoneMember; //type: Native::Interface::HundredGigE::ZoneMember
        class Vrrp; //type: Native::Interface::HundredGigE::Vrrp
        class FabricDomain; //type: Native::Interface::HundredGigE::FabricDomain
        class AnalysisModule; //type: Native::Interface::HundredGigE::AnalysisModule
        class Cts; //type: Native::Interface::HundredGigE::Cts
        class Udld; //type: Native::Interface::HundredGigE::Udld
        class Cdp; //type: Native::Interface::HundredGigE::Cdp
        class Mvrp; //type: Native::Interface::HundredGigE::Mvrp
        class Ntp; //type: Native::Interface::HundredGigE::Ntp
        class Utd; //type: Native::Interface::HundredGigE::Utd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::SwitchportConf> switchport_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport> switchport;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::StackwiseVirtual> stackwise_virtual;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Arp> arp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Backup> backup;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Cemoudp> cemoudp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::CwsTunnel> cws_tunnel;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::L2protocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Encapsulation> encapsulation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::FairQueueConf> fair_queue_conf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::FairQueue> fair_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Flowcontrol> flowcontrol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis> isis;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Bfd> bfd;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Bandwidth> bandwidth;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Dampening> dampening;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Domain> domain;
        ydk::YList hold_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls> mpls;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::IpVrf> ip_vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Vrf> vrf;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Ip> ip;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Logging> logging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mdix> mdix;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mop> mop;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::InterfaceQos> interface_qos;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Source> source;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Standby> standby;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::AccessSession> access_session;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::StormControl> storm_control;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Trust> trust;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::PriorityQueue> priority_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::RcvQueue> rcv_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Peer> peer;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::PmPath> pm_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Power> power;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::CarrierDelay> carrier_delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::ChannelGroup> channel_group;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Ethernet> ethernet;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Eapol> eapol;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Synchronous> synchronous;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Speed> speed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Negotiation> negotiation;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Plim> plim;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Pppoe> pppoe;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Service> service;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::CiscoIOSXEEthernetMacsecOption> cisco_ios_xe_ethernet_macsec_option;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Snmp> snmp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mab> mab; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::EtAnalytics> et_analytics;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::ServicePolicy> service_policy;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Auto> auto_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Datalink> datalink;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Energywise> energywise; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Location> location;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mac> mac;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Macro> macro;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::DualActive> dual_active;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::LoadBalancing> load_balancing;
        ydk::YList vlan_range;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switch> switch_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::SrrQueue> srr_queue;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::CiscoIOSXESwitchMacsecOption> cisco_ios_xe_switch_macsec_option_;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Ospfv3> ospfv3;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Performance> performance;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Lisp> lisp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::SpanningTree> spanning_tree;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mka> mka;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Umbrella> umbrella;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Evpn> evpn;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Dot1x> dot1x;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Crypto> crypto;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Lldp> lldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::ZoneMember> zone_member;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Vrrp> vrrp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::FabricDomain> fabric_domain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::AnalysisModule> analysis_module;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Cts> cts;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Udld> udld;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Cdp> cdp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mvrp> mvrp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Ntp> ntp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Utd> utd;
                class IfState;
        class ServiceInsertion;
        class ChannelProtocol;
        class Duplex;
        class Nat66;

}; // Native::Interface::HundredGigE


class Native::Interface::HundredGigE::SwitchportConf : public ydk::Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf switchport; //type: boolean

}; // Native::Interface::HundredGigE::SwitchportConf


class Native::Interface::HundredGigE::Switchport : public ydk::Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nonegotiate; //type: empty
        ydk::YLeaf protected_; //type: empty
        ydk::YLeaf host; //type: empty
        class Access; //type: Native::Interface::HundredGigE::Switchport::Access
        class Block; //type: Native::Interface::HundredGigE::Switchport::Block
        class Mode; //type: Native::Interface::HundredGigE::Switchport::Mode
        class PortSecurity; //type: Native::Interface::HundredGigE::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::HundredGigE::Switchport::Trunk
        class Voice; //type: Native::Interface::HundredGigE::Switchport::Voice
        class Priority; //type: Native::Interface::HundredGigE::Switchport::Priority
        class Autostate; //type: Native::Interface::HundredGigE::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::HundredGigE::Switchport::PrivateVlan
        class Vepa; //type: Native::Interface::HundredGigE::Switchport::Vepa

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Access> access;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Block> block;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Trunk> trunk;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Voice> voice;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Autostate> autostate;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Vepa> vepa;
        
}; // Native::Interface::HundredGigE::Switchport


class Native::Interface::HundredGigE::Switchport::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::HundredGigE::Switchport::Access::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::HundredGigE::Switchport::Access


class Native::Interface::HundredGigE::Switchport::Access::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: one of uint16, enumeration
        ydk::YLeaf name; //type: string
        class Vlan_;

}; // Native::Interface::HundredGigE::Switchport::Access::Vlan


class Native::Interface::HundredGigE::Switchport::Block : public ydk::Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multicast; //type: empty
        ydk::YLeaf unicast; //type: empty

}; // Native::Interface::HundredGigE::Switchport::Block


class Native::Interface::HundredGigE::Switchport::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dynamic; //type: Dynamic
        class Access; //type: Native::Interface::HundredGigE::Switchport::Mode::Access
        class Dot1qTunnel; //type: Native::Interface::HundredGigE::Switchport::Mode::Dot1qTunnel
        class PrivateVlan; //type: Native::Interface::HundredGigE::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::HundredGigE::Switchport::Mode::Trunk

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Mode::Dot1qTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Mode::Trunk> trunk; // presence node
                class Dynamic;

}; // Native::Interface::HundredGigE::Switchport::Mode


class Native::Interface::HundredGigE::Switchport::Mode::Access : public ydk::Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::HundredGigE::Switchport::Mode::Access


class Native::Interface::HundredGigE::Switchport::Mode::Dot1qTunnel : public ydk::Entity
{
    public:
        Dot1qTunnel();
        ~Dot1qTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::HundredGigE::Switchport::Mode::Dot1qTunnel


class Native::Interface::HundredGigE::Switchport::Mode::PrivateVlan : public ydk::Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host; //type: empty
        ydk::YLeaf promiscuous; //type: empty

}; // Native::Interface::HundredGigE::Switchport::Mode::PrivateVlan


class Native::Interface::HundredGigE::Switchport::Mode::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::HundredGigE::Switchport::Mode::Trunk


class Native::Interface::HundredGigE::Switchport::PortSecurity : public ydk::Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf violation; //type: Violation
        class Aging; //type: Native::Interface::HundredGigE::Switchport::PortSecurity::Aging
        class MacAddress; //type: Native::Interface::HundredGigE::Switchport::PortSecurity::MacAddress
        class Maximum; //type: Native::Interface::HundredGigE::Switchport::PortSecurity::Maximum

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PortSecurity::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PortSecurity::Maximum> maximum;
                class Violation;

}; // Native::Interface::HundredGigE::Switchport::PortSecurity


class Native::Interface::HundredGigE::Switchport::PortSecurity::Aging : public ydk::Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf static_; //type: empty
        ydk::YLeaf time; //type: uint16
        ydk::YLeaf type; //type: Type
        class Type;

}; // Native::Interface::HundredGigE::Switchport::PortSecurity::Aging


class Native::Interface::HundredGigE::Switchport::PortSecurity::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sticky; //type: empty
        ydk::YLeaf hw_address; //type: string
        ydk::YLeaf vlan; //type: uint16

}; // Native::Interface::HundredGigE::Switchport::PortSecurity::MacAddress


class Native::Interface::HundredGigE::Switchport::PortSecurity::Maximum : public ydk::Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_addresses; //type: uint16
        ydk::YLeaf vlan; //type: string

}; // Native::Interface::HundredGigE::Switchport::PortSecurity::Maximum


class Native::Interface::HundredGigE::Switchport::Trunk : public ydk::Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation; //type: Encapsulation
        class Allowed; //type: Native::Interface::HundredGigE::Switchport::Trunk::Allowed
        class Native_; //type: Native::Interface::HundredGigE::Switchport::Trunk::Native_
        class Pruning; //type: Native::Interface::HundredGigE::Switchport::Trunk::Pruning

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Trunk::Allowed> allowed;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Trunk::Native_> native;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Trunk::Pruning> pruning;
                class Encapsulation;

}; // Native::Interface::HundredGigE::Switchport::Trunk


class Native::Interface::HundredGigE::Switchport::Trunk::Allowed : public ydk::Entity
{
    public:
        Allowed();
        ~Allowed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::HundredGigE::Switchport::Trunk::Allowed::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Trunk::Allowed::Vlan> vlan;
        
}; // Native::Interface::HundredGigE::Switchport::Trunk::Allowed


class Native::Interface::HundredGigE::Switchport::Trunk::Allowed::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlans; //type: string
        ydk::YLeaf add; //type: one of uint16, string
        ydk::YLeaf all; //type: empty
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remove; //type: one of uint16, string
        ydk::YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::HundredGigE::Switchport::Trunk::Allowed::Vlan


class Native::Interface::HundredGigE::Switchport::Trunk::Native_ : public ydk::Entity
{
    public:
        Native_();
        ~Native_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: one of uint16, enumeration
        class Vlan;

}; // Native::Interface::HundredGigE::Switchport::Trunk::Native_


class Native::Interface::HundredGigE::Switchport::Trunk::Pruning : public ydk::Entity
{
    public:
        Pruning();
        ~Pruning();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::HundredGigE::Switchport::Trunk::Pruning::Vlan

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Trunk::Pruning::Vlan> vlan;
        
}; // Native::Interface::HundredGigE::Switchport::Trunk::Pruning


class Native::Interface::HundredGigE::Switchport::Trunk::Pruning::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf add; //type: one of uint16, string
        ydk::YLeaf none; //type: empty
        ydk::YLeaf remove; //type: one of uint16, string
        ydk::YLeafList vlans; //type: list of  one of uint16, string
        ydk::YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::HundredGigE::Switchport::Trunk::Pruning::Vlan


class Native::Interface::HundredGigE::Switchport::Voice : public ydk::Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vlan; //type: Native::Interface::HundredGigE::Switchport::Voice::Vlan
        class Detect; //type: Native::Interface::HundredGigE::Switchport::Voice::Detect

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Voice::Vlan> vlan;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Voice::Detect> detect;
        
}; // Native::Interface::HundredGigE::Switchport::Voice


class Native::Interface::HundredGigE::Switchport::Voice::Vlan : public ydk::Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan; //type: one of uint16, string, enumeration
        ydk::YLeaf name; //type: string
        class Vlan_;

}; // Native::Interface::HundredGigE::Switchport::Voice::Vlan


class Native::Interface::HundredGigE::Switchport::Voice::Detect : public ydk::Entity
{
    public:
        Detect();
        ~Detect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CiscoPhone; //type: Native::Interface::HundredGigE::Switchport::Voice::Detect::CiscoPhone

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Voice::Detect::CiscoPhone> cisco_phone; // presence node
        
}; // Native::Interface::HundredGigE::Switchport::Voice::Detect


class Native::Interface::HundredGigE::Switchport::Voice::Detect::CiscoPhone : public ydk::Entity
{
    public:
        CiscoPhone();
        ~CiscoPhone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf full_duplex; //type: empty

}; // Native::Interface::HundredGigE::Switchport::Voice::Detect::CiscoPhone


class Native::Interface::HundredGigE::Switchport::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Extend; //type: Native::Interface::HundredGigE::Switchport::Priority::Extend

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::Priority::Extend> extend;
        
}; // Native::Interface::HundredGigE::Switchport::Priority


class Native::Interface::HundredGigE::Switchport::Priority::Extend : public ydk::Entity
{
    public:
        Extend();
        ~Extend();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf trust; //type: empty
        ydk::YLeaf cos; //type: uint8

}; // Native::Interface::HundredGigE::Switchport::Priority::Extend


class Native::Interface::HundredGigE::Switchport::Autostate : public ydk::Entity
{
    public:
        Autostate();
        ~Autostate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exclude; //type: empty

}; // Native::Interface::HundredGigE::Switchport::Autostate


class Native::Interface::HundredGigE::Switchport::PrivateVlan : public ydk::Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Association; //type: Native::Interface::HundredGigE::Switchport::PrivateVlan::Association
        class HostAssociation; //type: Native::Interface::HundredGigE::Switchport::PrivateVlan::HostAssociation
        class Mapping; //type: Native::Interface::HundredGigE::Switchport::PrivateVlan::Mapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PrivateVlan::Association> association;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PrivateVlan::HostAssociation> host_association;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PrivateVlan::Mapping> mapping;
        
}; // Native::Interface::HundredGigE::Switchport::PrivateVlan


class Native::Interface::HundredGigE::Switchport::PrivateVlan::Association : public ydk::Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: Native::Interface::HundredGigE::Switchport::PrivateVlan::Association::Host
        class Mapping; //type: Native::Interface::HundredGigE::Switchport::PrivateVlan::Association::Mapping

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PrivateVlan::Association::Host> host;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Switchport::PrivateVlan::Association::Mapping> mapping;
        
}; // Native::Interface::HundredGigE::Switchport::PrivateVlan::Association


class Native::Interface::HundredGigE::Switchport::PrivateVlan::Association::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary_range; //type: uint16
        ydk::YLeaf secondary_range; //type: uint16

}; // Native::Interface::HundredGigE::Switchport::PrivateVlan::Association::Host


class Native::Interface::HundredGigE::Switchport::PrivateVlan::Association::Mapping : public ydk::Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary_range; //type: uint16
        ydk::YLeaf secondary_range; //type: string
        ydk::YLeaf add; //type: string
        ydk::YLeaf remove; //type: string

}; // Native::Interface::HundredGigE::Switchport::PrivateVlan::Association::Mapping


class Native::Interface::HundredGigE::Switchport::PrivateVlan::HostAssociation : public ydk::Entity
{
    public:
        HostAssociation();
        ~HostAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary_range; //type: uint16
        ydk::YLeaf secondary_range; //type: uint16

}; // Native::Interface::HundredGigE::Switchport::PrivateVlan::HostAssociation


class Native::Interface::HundredGigE::Switchport::PrivateVlan::Mapping : public ydk::Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary_range; //type: uint16
        ydk::YLeaf secondary_range; //type: string
        ydk::YLeaf add; //type: string
        ydk::YLeaf remove; //type: string

}; // Native::Interface::HundredGigE::Switchport::PrivateVlan::Mapping


class Native::Interface::HundredGigE::Switchport::Vepa : public ydk::Entity
{
    public:
        Vepa();
        ~Vepa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: empty

}; // Native::Interface::HundredGigE::Switchport::Vepa


class Native::Interface::HundredGigE::StackwiseVirtual : public ydk::Entity
{
    public:
        StackwiseVirtual();
        ~StackwiseVirtual();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link; //type: uint8
        ydk::YLeaf dual_active_detection; //type: empty

}; // Native::Interface::HundredGigE::StackwiseVirtual


class Native::Interface::HundredGigE::Arp : public ydk::Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32

}; // Native::Interface::HundredGigE::Arp


class Native::Interface::HundredGigE::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Delay; //type: Native::Interface::HundredGigE::Backup::Delay
        class Interface_; //type: Native::Interface::HundredGigE::Backup::Interface_
        class Load; //type: Native::Interface::HundredGigE::Backup::Load

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Backup::Delay> delay;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Backup::Interface_> interface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Backup::Load> load;
        
}; // Native::Interface::HundredGigE::Backup


class Native::Interface::HundredGigE::Backup::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf failure; //type: one of uint32, enumeration
        ydk::YLeaf secondary_disable; //type: one of uint32, enumeration
        class Failure;
        class SecondaryDisable;

}; // Native::Interface::HundredGigE::Backup::Delay


class Native::Interface::HundredGigE::Backup::Interface_ : public ydk::Entity
{
    public:
        Interface_();
        ~Interface_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf ethernet; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf fivegigabitethernet; //type: string
        ydk::YLeaf twentyfivegige; //type: string
        ydk::YLeaf twogigabitethernet; //type: string
        ydk::YLeaf fortygigabitethernet; //type: string
        ydk::YLeaf hundredgige; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class ATMSubinterface; //type: Native::Interface::HundredGigE::Backup::Interface_::ATMSubinterface
        class ATMACRsubinterface; //type: Native::Interface::HundredGigE::Backup::Interface_::ATMACRsubinterface
        class LISPSubinterface; //type: Native::Interface::HundredGigE::Backup::Interface_::LISPSubinterface
        class PortChannelSubinterface; //type: Native::Interface::HundredGigE::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Backup::Interface_::ATMSubinterface> atm_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Backup::Interface_::ATMACRsubinterface> atm_acrsubinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Backup::Interface_::LISPSubinterface> lisp_subinterface;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::HundredGigE::Backup::Interface_


class Native::Interface::HundredGigE::Backup::Interface_::ATMSubinterface : public ydk::Entity
{
    public:
        ATMSubinterface();
        ~ATMSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Interface::HundredGigE::Backup::Interface_::ATMSubinterface


class Native::Interface::HundredGigE::Backup::Interface_::ATMACRsubinterface : public ydk::Entity
{
    public:
        ATMACRsubinterface();
        ~ATMACRsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Interface::HundredGigE::Backup::Interface_::ATMACRsubinterface


class Native::Interface::HundredGigE::Backup::Interface_::LISPSubinterface : public ydk::Entity
{
    public:
        LISPSubinterface();
        ~LISPSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Interface::HundredGigE::Backup::Interface_::LISPSubinterface


class Native::Interface::HundredGigE::Backup::Interface_::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Interface::HundredGigE::Backup::Interface_::PortChannelSubinterface


class Native::Interface::HundredGigE::Backup::Load : public ydk::Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kickin; //type: one of uint32, enumeration
        ydk::YLeaf kickout; //type: one of uint32, enumeration
        class Kickin;
        class Kickout;

}; // Native::Interface::HundredGigE::Backup::Load


class Native::Interface::HundredGigE::Cemoudp : public ydk::Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Reserve; //type: Native::Interface::HundredGigE::Cemoudp::Reserve

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::HundredGigE::Cemoudp


class Native::Interface::HundredGigE::Cemoudp::Reserve : public ydk::Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acr; //type: uint8

}; // Native::Interface::HundredGigE::Cemoudp::Reserve


class Native::Interface::HundredGigE::CwsTunnel : public ydk::Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf in; //type: empty
        class Out; //type: Native::Interface::HundredGigE::CwsTunnel::Out

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::CwsTunnel::Out> out;
        
}; // Native::Interface::HundredGigE::CwsTunnel


class Native::Interface::HundredGigE::CwsTunnel::Out : public ydk::Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel_number; //type: uint16

}; // Native::Interface::HundredGigE::CwsTunnel::Out


class Native::Interface::HundredGigE::L2protocolTunnel : public ydk::Entity
{
    public:
        L2protocolTunnel();
        ~L2protocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cdp; //type: empty
        ydk::YLeaf stp; //type: empty
        ydk::YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::HundredGigE::L2protocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::HundredGigE::L2protocolTunnel::ShutdownThreshold

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::L2protocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::L2protocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::HundredGigE::L2protocolTunnel


class Native::Interface::HundredGigE::L2protocolTunnel::DropThreshold : public ydk::Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::HundredGigE::L2protocolTunnel::DropThreshold


class Native::Interface::HundredGigE::L2protocolTunnel::ShutdownThreshold : public ydk::Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packet_rate; //type: uint16
        ydk::YLeaf cdp; //type: uint16
        ydk::YLeaf stp; //type: uint16
        ydk::YLeaf vtp; //type: uint16

}; // Native::Interface::HundredGigE::L2protocolTunnel::ShutdownThreshold


class Native::Interface::HundredGigE::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dot1Q; //type: Native::Interface::HundredGigE::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::HundredGigE::Encapsulation::Isl
        class Ppp; //type: Native::Interface::HundredGigE::Encapsulation::Ppp
        class Slip; //type: Native::Interface::HundredGigE::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::HundredGigE::Encapsulation::FrameRelay

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Encapsulation::Isl> isl;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Encapsulation::Slip> slip; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Encapsulation::FrameRelay> frame_relay; // presence node
        
}; // Native::Interface::HundredGigE::Encapsulation


class Native::Interface::HundredGigE::Encapsulation::Dot1Q : public ydk::Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16
        ydk::YLeaf native; //type: empty

}; // Native::Interface::HundredGigE::Encapsulation::Dot1Q


class Native::Interface::HundredGigE::Encapsulation::Isl : public ydk::Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id; //type: uint16

}; // Native::Interface::HundredGigE::Encapsulation::Isl


class Native::Interface::HundredGigE::Encapsulation::Ppp : public ydk::Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::HundredGigE::Encapsulation::Ppp


class Native::Interface::HundredGigE::Encapsulation::Slip : public ydk::Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // Native::Interface::HundredGigE::Encapsulation::Slip


class Native::Interface::HundredGigE::Encapsulation::FrameRelay : public ydk::Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ietf; //type: empty

}; // Native::Interface::HundredGigE::Encapsulation::FrameRelay


class Native::Interface::HundredGigE::FairQueueConf : public ydk::Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fair_queue; //type: boolean

}; // Native::Interface::HundredGigE::FairQueueConf


class Native::Interface::HundredGigE::FairQueue : public ydk::Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf incomplete; //type: empty

}; // Native::Interface::HundredGigE::FairQueue


class Native::Interface::HundredGigE::Flowcontrol : public ydk::Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf receive; //type: Receive
        ydk::YLeaf send; //type: Send
        class Receive;
        class Send;

}; // Native::Interface::HundredGigE::Flowcontrol


class Native::Interface::HundredGigE::Isis : public ydk::Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_interval; //type: uint32
        ydk::YLeaf mesh_group; //type: one of uint32, enumeration
        ydk::YLeaf network; //type: Network
        ydk::YLeaf protocol; //type: Protocol
        ydk::YLeaf retransmit_interval; //type: uint16
        ydk::YLeaf retransmit_throttle_interval; //type: uint16
        ydk::YLeaf tag; //type: uint32
        class AdjacencyFilter; //type: Native::Interface::HundredGigE::Isis::AdjacencyFilter
        class Advertise; //type: Native::Interface::HundredGigE::Isis::Advertise
        class Authentication; //type: Native::Interface::HundredGigE::Isis::Authentication
        class CircuitType; //type: Native::Interface::HundredGigE::Isis::CircuitType
        class CsnpInterval; //type: Native::Interface::HundredGigE::Isis::CsnpInterval
        class Hello; //type: Native::Interface::HundredGigE::Isis::Hello
        class HelloInterval; //type: Native::Interface::HundredGigE::Isis::HelloInterval
        class HelloMultiplier; //type: Native::Interface::HundredGigE::Isis::HelloMultiplier
        class Ipv6; //type: Native::Interface::HundredGigE::Isis::Ipv6
        class Metric; //type: Native::Interface::HundredGigE::Isis::Metric
        class Password; //type: Native::Interface::HundredGigE::Isis::Password
        class Priority; //type: Native::Interface::HundredGigE::Isis::Priority
        class Bfd; //type: Native::Interface::HundredGigE::Isis::Bfd
        class ThreeWayHandshake; //type: Native::Interface::HundredGigE::Isis::ThreeWayHandshake

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::AdjacencyFilter> adjacency_filter;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Advertise> advertise;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Authentication> authentication;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::CircuitType> circuit_type; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::CsnpInterval> csnp_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Hello> hello;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::HelloInterval> hello_interval;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::HelloMultiplier> hello_multiplier;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Password> password;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Priority> priority;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Bfd> bfd; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::ThreeWayHandshake> three_way_handshake; // presence node
                class MeshGroup;
        class Network;
        class Protocol;

}; // Native::Interface::HundredGigE::Isis


class Native::Interface::HundredGigE::Isis::AdjacencyFilter : public ydk::Entity
{
    public:
        AdjacencyFilter();
        ~AdjacencyFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf match_all; //type: empty

}; // Native::Interface::HundredGigE::Isis::AdjacencyFilter


class Native::Interface::HundredGigE::Isis::Advertise : public ydk::Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix; //type: empty

}; // Native::Interface::HundredGigE::Isis::Advertise


class Native::Interface::HundredGigE::Isis::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mode; //type: Native::Interface::HundredGigE::Isis::Authentication::Mode
        class KeyChain; //type: Native::Interface::HundredGigE::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::HundredGigE::Isis::Authentication::SendOnly

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Authentication::Mode> mode;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::HundredGigE::Isis::Authentication


class Native::Interface::HundredGigE::Isis::Authentication::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Md5; //type: Native::Interface::HundredGigE::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::HundredGigE::Isis::Authentication::Mode::Text

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::HundredGigE::Isis::Authentication::Mode


class Native::Interface::HundredGigE::Isis::Authentication::Mode::Md5 : public ydk::Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::HundredGigE::Isis::Authentication::Mode::Md5


class Native::Interface::HundredGigE::Isis::Authentication::Mode::Text : public ydk::Entity
{
    public:
        Text();
        ~Text();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::HundredGigE::Isis::Authentication::Mode::Text


class Native::Interface::HundredGigE::Isis::Authentication::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class KeyChainList; //type: Native::Interface::HundredGigE::Isis::Authentication::KeyChain::KeyChainList

        ydk::YList key_chain_list;
        
}; // Native::Interface::HundredGigE::Isis::Authentication::KeyChain


class Native::Interface::HundredGigE::Isis::Authentication::KeyChain::KeyChainList : public ydk::Entity
{
    public:
        KeyChainList();
        ~KeyChainList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType
        ydk::YLeaf name; //type: string

}; // Native::Interface::HundredGigE::Isis::Authentication::KeyChain::KeyChainList


class Native::Interface::HundredGigE::Isis::Authentication::SendOnly : public ydk::Entity
{
    public:
        SendOnly();
        ~SendOnly();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: AuthenticationLevelType

}; // Native::Interface::HundredGigE::Isis::Authentication::SendOnly


class Native::Interface::HundredGigE::Isis::CircuitType : public ydk::Entity
{
    public:
        CircuitType();
        ~CircuitType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        class Levels;

}; // Native::Interface::HundredGigE::Isis::CircuitType


class Native::Interface::HundredGigE::Isis::CsnpInterval : public ydk::Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        class CsnpIntervalList; //type: Native::Interface::HundredGigE::Isis::CsnpInterval::CsnpIntervalList

        ydk::YList csnp_interval_list;
        
}; // Native::Interface::HundredGigE::Isis::CsnpInterval


class Native::Interface::HundredGigE::Isis::CsnpInterval::CsnpIntervalList : public ydk::Entity
{
    public:
        CsnpIntervalList();
        ~CsnpIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: uint16
        class Levels;

}; // Native::Interface::HundredGigE::Isis::CsnpInterval::CsnpIntervalList


class Native::Interface::HundredGigE::Isis::Hello : public ydk::Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Padding; //type: Native::Interface::HundredGigE::Isis::Hello::Padding

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::HundredGigE::Isis::Hello


class Native::Interface::HundredGigE::Isis::Hello::Padding : public ydk::Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf always; //type: empty

}; // Native::Interface::HundredGigE::Isis::Hello::Padding


class Native::Interface::HundredGigE::Isis::HelloInterval : public ydk::Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of uint16, enumeration
        class HelloIntervalList; //type: Native::Interface::HundredGigE::Isis::HelloInterval::HelloIntervalList

        ydk::YList hello_interval_list;
                class Value_;

}; // Native::Interface::HundredGigE::Isis::HelloInterval


class Native::Interface::HundredGigE::Isis::HelloInterval::HelloIntervalList : public ydk::Entity
{
    public:
        HelloIntervalList();
        ~HelloIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: one of uint16, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::HundredGigE::Isis::HelloInterval::HelloIntervalList


class Native::Interface::HundredGigE::Isis::HelloMultiplier : public ydk::Entity
{
    public:
        HelloMultiplier();
        ~HelloMultiplier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint16
        class HelloMultiplierList; //type: Native::Interface::HundredGigE::Isis::HelloMultiplier::HelloMultiplierList

        ydk::YList hello_multiplier_list;
        
}; // Native::Interface::HundredGigE::Isis::HelloMultiplier


class Native::Interface::HundredGigE::Isis::HelloMultiplier::HelloMultiplierList : public ydk::Entity
{
    public:
        HelloMultiplierList();
        ~HelloMultiplierList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: uint16
        class Levels;

}; // Native::Interface::HundredGigE::Isis::HelloMultiplier::HelloMultiplierList


class Native::Interface::HundredGigE::Isis::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tag; //type: uint32
        class Metric; //type: Native::Interface::HundredGigE::Isis::Ipv6::Metric
        class Bfd; //type: Native::Interface::HundredGigE::Isis::Ipv6::Bfd

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Ipv6::Metric> metric;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Isis::Ipv6::Bfd> bfd; // presence node
        
}; // Native::Interface::HundredGigE::Isis::Ipv6


class Native::Interface::HundredGigE::Isis::Ipv6::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::HundredGigE::Isis::Ipv6::Metric::MetricList

        ydk::YList metric_list;
                class Value_;

}; // Native::Interface::HundredGigE::Isis::Ipv6::Metric


class Native::Interface::HundredGigE::Isis::Ipv6::Metric::MetricList : public ydk::Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: one of uint32, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::HundredGigE::Isis::Ipv6::Metric::MetricList


class Native::Interface::HundredGigE::Isis::Ipv6::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::HundredGigE::Isis::Ipv6::Bfd


class Native::Interface::HundredGigE::Isis::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: one of uint32, enumeration
        class MetricList; //type: Native::Interface::HundredGigE::Isis::Metric::MetricList

        ydk::YList metric_list;
                class Value_;

}; // Native::Interface::HundredGigE::Isis::Metric


class Native::Interface::HundredGigE::Isis::Metric::MetricList : public ydk::Entity
{
    public:
        MetricList();
        ~MetricList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: one of uint32, enumeration
        class Levels;
        class Value_;

}; // Native::Interface::HundredGigE::Isis::Metric::MetricList


class Native::Interface::HundredGigE::Isis::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf password; //type: string
        class PasswordList; //type: Native::Interface::HundredGigE::Isis::Password::PasswordList

        ydk::YList password_list;
        
}; // Native::Interface::HundredGigE::Isis::Password


class Native::Interface::HundredGigE::Isis::Password::PasswordList : public ydk::Entity
{
    public:
        PasswordList();
        ~PasswordList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf password; //type: string
        class Levels;

}; // Native::Interface::HundredGigE::Isis::Password::PasswordList


class Native::Interface::HundredGigE::Isis::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint8
        class PriorityList; //type: Native::Interface::HundredGigE::Isis::Priority::PriorityList

        ydk::YList priority_list;
        
}; // Native::Interface::HundredGigE::Isis::Priority


class Native::Interface::HundredGigE::Isis::Priority::PriorityList : public ydk::Entity
{
    public:
        PriorityList();
        ~PriorityList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf levels; //type: Levels
        ydk::YLeaf value_; //type: uint8
        class Levels;

}; // Native::Interface::HundredGigE::Isis::Priority::PriorityList


class Native::Interface::HundredGigE::Isis::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // Native::Interface::HundredGigE::Isis::Bfd


class Native::Interface::HundredGigE::Isis::ThreeWayHandshake : public ydk::Entity
{
    public:
        ThreeWayHandshake();
        ~ThreeWayHandshake();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf implementor; //type: Implementor
        class Implementor;

}; // Native::Interface::HundredGigE::Isis::ThreeWayHandshake


class Native::Interface::HundredGigE::KeepaliveSettings : public ydk::Entity
{
    public:
        KeepaliveSettings();
        ~KeepaliveSettings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Keepalive; //type: Native::Interface::HundredGigE::KeepaliveSettings::Keepalive

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::KeepaliveSettings::Keepalive> keepalive; // presence node
        
}; // Native::Interface::HundredGigE::KeepaliveSettings


class Native::Interface::HundredGigE::KeepaliveSettings::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf period; //type: uint16
        ydk::YLeaf retries; //type: uint8

}; // Native::Interface::HundredGigE::KeepaliveSettings::Keepalive


class Native::Interface::HundredGigE::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf template_; //type: string
        ydk::YLeaf echo; //type: boolean
        class Interval; //type: Native::Interface::HundredGigE::Bfd::Interval

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Bfd::Interval> interval;
        
}; // Native::Interface::HundredGigE::Bfd


class Native::Interface::HundredGigE::Bfd::Interval : public ydk::Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf msecs; //type: uint16
        ydk::YLeaf min_rx; //type: uint16
        ydk::YLeaf multiplier; //type: uint8

}; // Native::Interface::HundredGigE::Bfd::Interval


class Native::Interface::HundredGigE::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf qos_reference; //type: uint32
        ydk::YLeaf kilobits; //type: uint32
        class Receive; //type: Native::Interface::HundredGigE::Bandwidth::Receive
        class Inherit; //type: Native::Interface::HundredGigE::Bandwidth::Inherit

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Bandwidth::Receive> receive;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Bandwidth::Inherit> inherit; // presence node
        
}; // Native::Interface::HundredGigE::Bandwidth


class Native::Interface::HundredGigE::Bandwidth::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf inherit; //type: empty
        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::HundredGigE::Bandwidth::Receive


class Native::Interface::HundredGigE::Bandwidth::Inherit : public ydk::Entity
{
    public:
        Inherit();
        ~Inherit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kilobits; //type: uint32

}; // Native::Interface::HundredGigE::Bandwidth::Inherit


class Native::Interface::HundredGigE::Dampening : public ydk::Entity
{
    public:
        Dampening();
        ~Dampening();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dampening_time; //type: uint16
        ydk::YLeaf start_reusing_time; //type: uint16
        ydk::YLeaf start_supressing_time; //type: uint16
        ydk::YLeaf maximum_supressing_time; //type: uint16
        class Restart; //type: Native::Interface::HundredGigE::Dampening::Restart

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Dampening::Restart> restart;
        
}; // Native::Interface::HundredGigE::Dampening


class Native::Interface::HundredGigE::Dampening::Restart : public ydk::Entity
{
    public:
        Restart();
        ~Restart();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf restart; //type: empty
        ydk::YLeaf restart_penalty; //type: uint16

}; // Native::Interface::HundredGigE::Dampening::Restart


class Native::Interface::HundredGigE::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf path; //type: string
        ydk::YLeaf internet_bound; //type: empty
        ydk::YLeaf path_id; //type: uint8
        ydk::YLeaf path_last_resort; //type: empty
        ydk::YLeaf zero_sla; //type: empty

}; // Native::Interface::HundredGigE::Domain


class Native::Interface::HundredGigE::HoldQueue : public ydk::Entity
{
    public:
        HoldQueue();
        ~HoldQueue();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: Direction
        ydk::YLeaf queue_length; //type: uint32
        class Direction;

}; // Native::Interface::HundredGigE::HoldQueue


class Native::Interface::HundredGigE::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip; //type: empty
        ydk::YLeaf mtu; //type: uint16
        class Accounting; //type: Native::Interface::HundredGigE::Mpls::Accounting
        class Bgp; //type: Native::Interface::HundredGigE::Mpls::Bgp
        class Label; //type: Native::Interface::HundredGigE::Mpls::Label
        class Ldp; //type: Native::Interface::HundredGigE::Mpls::Ldp
        class TrafficEng; //type: Native::Interface::HundredGigE::Mpls::TrafficEng

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::Accounting> accounting;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::Bgp> bgp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::Label> label;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::Ldp> ldp;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Interface::HundredGigE::Mpls


class Native::Interface::HundredGigE::Mpls::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Experimental; //type: Native::Interface::HundredGigE::Mpls::Accounting::Experimental

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::Accounting::Experimental> experimental;
        
}; // Native::Interface::HundredGigE::Mpls::Accounting


class Native::Interface::HundredGigE::Mpls::Accounting::Experimental : public ydk::Entity
{
    public:
        Experimental();
        ~Experimental();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: empty
        ydk::YLeaf output; //type: empty

}; // Native::Interface::HundredGigE::Mpls::Accounting::Experimental


class Native::Interface::HundredGigE::Mpls::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding; //type: empty

}; // Native::Interface::HundredGigE::Mpls::Bgp


class Native::Interface::HundredGigE::Mpls::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::Interface::HundredGigE::Mpls::Label


class Native::Interface::HundredGigE::Mpls::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Discovery; //type: Native::Interface::HundredGigE::Mpls::Ldp::Discovery
        class Igp; //type: Native::Interface::HundredGigE::Mpls::Ldp::Igp

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::Ldp::Discovery> discovery;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::Ldp::Igp> igp;
        
}; // Native::Interface::HundredGigE::Mpls::Ldp


class Native::Interface::HundredGigE::Mpls::Ldp::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_address; //type: one of string, enumeration

}; // Native::Interface::HundredGigE::Mpls::Ldp::Discovery


class Native::Interface::HundredGigE::Mpls::Ldp::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sync; //type: Native::Interface::HundredGigE::Mpls::Ldp::Igp::Sync

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::Ldp::Igp::Sync> sync; // presence node
        
}; // Native::Interface::HundredGigE::Mpls::Ldp::Igp


class Native::Interface::HundredGigE::Mpls::Ldp::Igp::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf delay; //type: uint8

}; // Native::Interface::HundredGigE::Mpls::Ldp::Igp::Sync


class Native::Interface::HundredGigE::Mpls::TrafficEng : public ydk::Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf administrative_weight; //type: uint32
        ydk::YLeaf attribute_flags; //type: string
        ydk::YLeaf tunnels; //type: empty
        class BackupPath; //type: Native::Interface::HundredGigE::Mpls::TrafficEng::BackupPath
        class Flooding; //type: Native::Interface::HundredGigE::Mpls::TrafficEng::Flooding
        class PassiveInterface; //type: Native::Interface::HundredGigE::Mpls::TrafficEng::PassiveInterface

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::TrafficEng::BackupPath> backup_path;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::TrafficEng::Flooding> flooding;
        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::TrafficEng::PassiveInterface> passive_interface;
        
}; // Native::Interface::HundredGigE::Mpls::TrafficEng


class Native::Interface::HundredGigE::Mpls::TrafficEng::BackupPath : public ydk::Entity
{
    public:
        BackupPath();
        ~BackupPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunnel; //type: uint32

}; // Native::Interface::HundredGigE::Mpls::TrafficEng::BackupPath


class Native::Interface::HundredGigE::Mpls::TrafficEng::Flooding : public ydk::Entity
{
    public:
        Flooding();
        ~Flooding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Thresholds; //type: Native::Interface::HundredGigE::Mpls::TrafficEng::Flooding::Thresholds

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::TrafficEng::Flooding::Thresholds> thresholds;
        
}; // Native::Interface::HundredGigE::Mpls::TrafficEng::Flooding


class Native::Interface::HundredGigE::Mpls::TrafficEng::Flooding::Thresholds : public ydk::Entity
{
    public:
        Thresholds();
        ~Thresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList down; //type: list of  uint8
        ydk::YLeafList up; //type: list of  uint8

}; // Native::Interface::HundredGigE::Mpls::TrafficEng::Flooding::Thresholds


class Native::Interface::HundredGigE::Mpls::TrafficEng::PassiveInterface : public ydk::Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nbr_te_id; //type: string
        ydk::YLeaf nbr_if_addr; //type: string
        class NbrIgpId; //type: Native::Interface::HundredGigE::Mpls::TrafficEng::PassiveInterface::NbrIgpId

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_native::Native::Interface::HundredGigE::Mpls::TrafficEng::PassiveInterface::NbrIgpId> nbr_igp_id;
        
}; // Native::Interface::HundredGigE::Mpls::TrafficEng::PassiveInterface

class Native::Interface::HundredGigE::IfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nhrp;

};

class Native::Interface::HundredGigE::ServiceInsertion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf waas;

};

class Native::Interface::HundredGigE::ChannelProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lacp;
        static const ydk::Enum::YLeaf pagp;

};

class Native::Interface::HundredGigE::Duplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

};

class Native::Interface::HundredGigE::Nat66 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inside;
        static const ydk::Enum::YLeaf outside;

};

class Native::Interface::HundredGigE::Switchport::Access::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dynamic;

};

class Native::Interface::HundredGigE::Switchport::Mode::Dynamic : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf desirable;

};

class Native::Interface::HundredGigE::Switchport::PortSecurity::Violation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protect;
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Interface::HundredGigE::Switchport::PortSecurity::Aging::Type : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf inactivity;

};

class Native::Interface::HundredGigE::Switchport::Trunk::Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf isl;
        static const ydk::Enum::YLeaf negotiate;

};

class Native::Interface::HundredGigE::Switchport::Trunk::Native_::Vlan : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tag;

};

class Native::Interface::HundredGigE::Switchport::Voice::Vlan::Vlan_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dot1p;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf untagged;

};

class Native::Interface::HundredGigE::Backup::Delay::Failure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::HundredGigE::Backup::Delay::SecondaryDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::HundredGigE::Backup::Load::Kickin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::HundredGigE::Backup::Load::Kickout : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;

};

class Native::Interface::HundredGigE::Flowcontrol::Receive : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::HundredGigE::Flowcontrol::Send : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf desired;
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf on;

};

class Native::Interface::HundredGigE::Isis::MeshGroup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf blocked;

};

class Native::Interface::HundredGigE::Isis::Network : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf point_to_point;

};

class Native::Interface::HundredGigE::Isis::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf shutdown;

};

class Native::Interface::HundredGigE::Isis::CircuitType::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_1_2;
        static const ydk::Enum::YLeaf level_2_only;

};

class Native::Interface::HundredGigE::Isis::CsnpInterval::CsnpIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::HundredGigE::Isis::HelloInterval::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

};

class Native::Interface::HundredGigE::Isis::HelloInterval::HelloIntervalList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::HundredGigE::Isis::HelloInterval::HelloIntervalList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minimal;

};

class Native::Interface::HundredGigE::Isis::HelloMultiplier::HelloMultiplierList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::HundredGigE::Isis::Ipv6::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::HundredGigE::Isis::Ipv6::Metric::MetricList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::HundredGigE::Isis::Ipv6::Metric::MetricList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::HundredGigE::Isis::Metric::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::HundredGigE::Isis::Metric::MetricList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::HundredGigE::Isis::Metric::MetricList::Value_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf maximum;

};

class Native::Interface::HundredGigE::Isis::Password::PasswordList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::HundredGigE::Isis::Priority::PriorityList::Levels : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf level_1;
        static const ydk::Enum::YLeaf level_2;

};

class Native::Interface::HundredGigE::Isis::ThreeWayHandshake::Implementor : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cisco;
        static const ydk::Enum::YLeaf ietf;

};

class Native::Interface::HundredGigE::HoldQueue::Direction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class Native::Interface::HundredGigE::Mpls::Label::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_71_ */

