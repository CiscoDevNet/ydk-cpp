#ifndef _CISCO_TAP2_MIB_
#define _CISCO_TAP2_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_TAP2_MIB {

class CiscoTap2Mib : public ydk::Entity
{
    public:
        CiscoTap2Mib();
        ~CiscoTap2Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Ctap2Mediationgroup; //type: CiscoTap2Mib::Ctap2Mediationgroup
        class Ctap2Debuggroup; //type: CiscoTap2Mib::Ctap2Debuggroup
        class Ctap2Mediationtable; //type: CiscoTap2Mib::Ctap2Mediationtable
        class Ctap2Streamtable; //type: CiscoTap2Mib::Ctap2Streamtable
        class Ctap2Debugtable; //type: CiscoTap2Mib::Ctap2Debugtable
        class Ctap2Debugusertable; //type: CiscoTap2Mib::Ctap2Debugusertable

        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Debuggroup> ctap2debuggroup;
        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Debugtable> ctap2debugtable;
        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Debugusertable> ctap2debugusertable;
        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationgroup> ctap2mediationgroup;
        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationtable> ctap2mediationtable;
        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Streamtable> ctap2streamtable;
        
}; // CiscoTap2Mib


class CiscoTap2Mib::Ctap2Mediationgroup : public ydk::Entity
{
    public:
        Ctap2Mediationgroup();
        ~Ctap2Mediationgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ctap2mediationnewindex; //type: int32
        ydk::YLeaf ctap2mediationcapabilities; //type: Ctap2Mediationcapabilities

}; // CiscoTap2Mib::Ctap2Mediationgroup


class CiscoTap2Mib::Ctap2Debuggroup : public ydk::Entity
{
    public:
        Ctap2Debuggroup();
        ~Ctap2Debuggroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ctap2debugage; //type: int32
        ydk::YLeaf ctap2debugmaxentries; //type: int32

}; // CiscoTap2Mib::Ctap2Debuggroup


class CiscoTap2Mib::Ctap2Mediationtable : public ydk::Entity
{
    public:
        Ctap2Mediationtable();
        ~Ctap2Mediationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ctap2Mediationentry; //type: CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry

        std::vector<std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry> > ctap2mediationentry;
        
}; // CiscoTap2Mib::Ctap2Mediationtable


class CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry : public ydk::Entity
{
    public:
        Ctap2Mediationentry();
        ~Ctap2Mediationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ctap2mediationcontentid; //type: int32
        ydk::YLeaf ctap2mediationdestaddresstype; //type: Inetaddresstype
        ydk::YLeaf ctap2mediationdestaddress; //type: binary
        ydk::YLeaf ctap2mediationdestport; //type: uint16
        ydk::YLeaf ctap2mediationsrcinterface; //type: int32
        ydk::YLeaf ctap2mediationrtcpport; //type: uint16
        ydk::YLeaf ctap2mediationdscp; //type: int32
        ydk::YLeaf ctap2mediationdatatype; //type: int32
        ydk::YLeaf ctap2mediationretransmittype; //type: int32
        ydk::YLeaf ctap2mediationtimeout; //type: string
        ydk::YLeaf ctap2mediationtransport; //type: Ctap2Mediationtransport
        ydk::YLeaf ctap2mediationnotificationenable; //type: boolean
        ydk::YLeaf ctap2mediationstatus; //type: Rowstatus
        ydk::YLeaf ctap2mediationradiuskey; //type: binary
        class Ctap2Mediationtransport;

}; // CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry


class CiscoTap2Mib::Ctap2Streamtable : public ydk::Entity
{
    public:
        Ctap2Streamtable();
        ~Ctap2Streamtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ctap2Streamentry; //type: CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry

        std::vector<std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry> > ctap2streamentry;
        
}; // CiscoTap2Mib::Ctap2Streamtable


class CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry : public ydk::Entity
{
    public:
        Ctap2Streamentry();
        ~Ctap2Streamentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::ctap2mediationcontentid)
        ydk::YLeaf ctap2mediationcontentid;
        ydk::YLeaf ctap2streamindex; //type: int32
        ydk::YLeaf ctap2streamtype; //type: Ctap2Streamtype
        ydk::YLeaf ctap2streaminterceptenable; //type: boolean
        ydk::YLeaf ctap2streaminterceptedpackets; //type: uint32
        ydk::YLeaf ctap2streaminterceptdrops; //type: uint32
        ydk::YLeaf ctap2streamstatus; //type: Rowstatus
        ydk::YLeaf ctap2streaminterceptedhcpackets; //type: uint64
        ydk::YLeaf ctap2streamintercepthcdrops; //type: uint64
        class Ctap2Streamtype;

}; // CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry


class CiscoTap2Mib::Ctap2Debugtable : public ydk::Entity
{
    public:
        Ctap2Debugtable();
        ~Ctap2Debugtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ctap2Debugentry; //type: CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry

        std::vector<std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry> > ctap2debugentry;
        
}; // CiscoTap2Mib::Ctap2Debugtable


class CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry : public ydk::Entity
{
    public:
        Ctap2Debugentry();
        ~Ctap2Debugentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ctap2debugindex; //type: int32
        ydk::YLeaf ctap2debugmediationid; //type: uint32
        ydk::YLeaf ctap2debugstreamid; //type: uint32
        ydk::YLeaf ctap2debugmessage; //type: string
        ydk::YLeaf ctap2debugstatus; //type: Rowstatus

}; // CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry


class CiscoTap2Mib::Ctap2Debugusertable : public ydk::Entity
{
    public:
        Ctap2Debugusertable();
        ~Ctap2Debugusertable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ctap2Debuguserentry; //type: CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry

        std::vector<std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry> > ctap2debuguserentry;
        
}; // CiscoTap2Mib::Ctap2Debugusertable


class CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry : public ydk::Entity
{
    public:
        Ctap2Debuguserentry();
        ~Ctap2Debuguserentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::ctap2mediationcontentid)
        ydk::YLeaf ctap2mediationcontentid;
        ydk::YLeaf ctap2debugusername; //type: string
        ydk::YLeaf ctap2debugusertimeout; //type: string
        ydk::YLeaf ctap2debuguserstoragetype; //type: Storagetype
        ydk::YLeaf ctap2debuguserstatus; //type: Rowstatus

}; // CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry

class CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::Ctap2Mediationtransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf rtpNack;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf rtp;
        static const ydk::Enum::YLeaf radius;

};

class CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::Ctap2Streamtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf mac;
        static const ydk::Enum::YLeaf userConnection;
        static const ydk::Enum::YLeaf msPdsn;
        static const ydk::Enum::YLeaf mobility;
        static const ydk::Enum::YLeaf voip;

};


}
}

#endif /* _CISCO_TAP2_MIB_ */

