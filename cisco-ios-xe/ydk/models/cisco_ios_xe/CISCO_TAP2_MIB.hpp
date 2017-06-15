#ifndef _CISCO_TAP2_MIB_
#define _CISCO_TAP2_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_TAP2_MIB {

class CiscoTap2Mib : public Entity
{
    public:
        CiscoTap2Mib();
        ~CiscoTap2Mib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Ctap2Mediationgroup; //type: CiscoTap2Mib::Ctap2Mediationgroup
        class Ctap2Debuggroup; //type: CiscoTap2Mib::Ctap2Debuggroup
        class Ctap2Mediationtable; //type: CiscoTap2Mib::Ctap2Mediationtable
        class Ctap2Streamtable; //type: CiscoTap2Mib::Ctap2Streamtable
        class Ctap2Debugtable; //type: CiscoTap2Mib::Ctap2Debugtable
        class Ctap2Debugusertable; //type: CiscoTap2Mib::Ctap2Debugusertable

        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Debuggroup> ctap2debuggroup_;
        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Debugtable> ctap2debugtable_;
        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Debugusertable> ctap2debugusertable_;
        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationgroup> ctap2mediationgroup_;
        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationtable> ctap2mediationtable_;
        std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Streamtable> ctap2streamtable_;
        
}; // CiscoTap2Mib


class CiscoTap2Mib::Ctap2Mediationgroup : public Entity
{
    public:
        Ctap2Mediationgroup();
        ~Ctap2Mediationgroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ctap2mediationnewindex; //type: int32
        YLeaf ctap2mediationcapabilities; //type: Ctap2Mediationcapabilities

}; // CiscoTap2Mib::Ctap2Mediationgroup


class CiscoTap2Mib::Ctap2Debuggroup : public Entity
{
    public:
        Ctap2Debuggroup();
        ~Ctap2Debuggroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ctap2debugage; //type: int32
        YLeaf ctap2debugmaxentries; //type: int32

}; // CiscoTap2Mib::Ctap2Debuggroup


class CiscoTap2Mib::Ctap2Mediationtable : public Entity
{
    public:
        Ctap2Mediationtable();
        ~Ctap2Mediationtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ctap2Mediationentry; //type: CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry

        std::vector<std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry> > ctap2mediationentry_;
        
}; // CiscoTap2Mib::Ctap2Mediationtable


class CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry : public Entity
{
    public:
        Ctap2Mediationentry();
        ~Ctap2Mediationentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ctap2mediationcontentid; //type: int32
        YLeaf ctap2mediationdestaddresstype; //type: InetaddresstypeEnum
        YLeaf ctap2mediationdestaddress; //type: binary
        YLeaf ctap2mediationdestport; //type: uint16
        YLeaf ctap2mediationsrcinterface; //type: int32
        YLeaf ctap2mediationrtcpport; //type: uint16
        YLeaf ctap2mediationdscp; //type: int32
        YLeaf ctap2mediationdatatype; //type: int32
        YLeaf ctap2mediationretransmittype; //type: int32
        YLeaf ctap2mediationtimeout; //type: string
        YLeaf ctap2mediationtransport; //type: Ctap2MediationtransportEnum
        YLeaf ctap2mediationnotificationenable; //type: boolean
        YLeaf ctap2mediationstatus; //type: RowstatusEnum
        YLeaf ctap2mediationradiuskey; //type: binary
        class Ctap2MediationtransportEnum;

}; // CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry


class CiscoTap2Mib::Ctap2Streamtable : public Entity
{
    public:
        Ctap2Streamtable();
        ~Ctap2Streamtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ctap2Streamentry; //type: CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry

        std::vector<std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry> > ctap2streamentry_;
        
}; // CiscoTap2Mib::Ctap2Streamtable


class CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry : public Entity
{
    public:
        Ctap2Streamentry();
        ~Ctap2Streamentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::ctap2mediationcontentid)
        YLeaf ctap2mediationcontentid;
        YLeaf ctap2streamindex; //type: int32
        YLeaf ctap2streamtype; //type: Ctap2StreamtypeEnum
        YLeaf ctap2streaminterceptenable; //type: boolean
        YLeaf ctap2streaminterceptedpackets; //type: uint32
        YLeaf ctap2streaminterceptdrops; //type: uint32
        YLeaf ctap2streamstatus; //type: RowstatusEnum
        YLeaf ctap2streaminterceptedhcpackets; //type: uint64
        YLeaf ctap2streamintercepthcdrops; //type: uint64
        class Ctap2StreamtypeEnum;

}; // CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry


class CiscoTap2Mib::Ctap2Debugtable : public Entity
{
    public:
        Ctap2Debugtable();
        ~Ctap2Debugtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ctap2Debugentry; //type: CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry

        std::vector<std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry> > ctap2debugentry_;
        
}; // CiscoTap2Mib::Ctap2Debugtable


class CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry : public Entity
{
    public:
        Ctap2Debugentry();
        ~Ctap2Debugentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ctap2debugindex; //type: int32
        YLeaf ctap2debugmediationid; //type: uint32
        YLeaf ctap2debugstreamid; //type: uint32
        YLeaf ctap2debugmessage; //type: string
        YLeaf ctap2debugstatus; //type: RowstatusEnum

}; // CiscoTap2Mib::Ctap2Debugtable::Ctap2Debugentry


class CiscoTap2Mib::Ctap2Debugusertable : public Entity
{
    public:
        Ctap2Debugusertable();
        ~Ctap2Debugusertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ctap2Debuguserentry; //type: CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry

        std::vector<std::shared_ptr<CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry> > ctap2debuguserentry_;
        
}; // CiscoTap2Mib::Ctap2Debugusertable


class CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry : public Entity
{
    public:
        Ctap2Debuguserentry();
        ~Ctap2Debuguserentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to CISCO_TAP2_MIB::CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::ctap2mediationcontentid)
        YLeaf ctap2mediationcontentid;
        YLeaf ctap2debugusername; //type: string
        YLeaf ctap2debugusertimeout; //type: string
        YLeaf ctap2debuguserstoragetype; //type: StoragetypeEnum
        YLeaf ctap2debuguserstatus; //type: RowstatusEnum

}; // CiscoTap2Mib::Ctap2Debugusertable::Ctap2Debuguserentry

class CiscoTap2Mib::Ctap2Mediationtable::Ctap2Mediationentry::Ctap2MediationtransportEnum : public Enum
{
    public:
        static const Enum::YLeaf udp;
        static const Enum::YLeaf rtpNack;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf sctp;
        static const Enum::YLeaf rtp;
        static const Enum::YLeaf radius;

};

class CiscoTap2Mib::Ctap2Streamtable::Ctap2Streamentry::Ctap2StreamtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;
        static const Enum::YLeaf mac;
        static const Enum::YLeaf userConnection;
        static const Enum::YLeaf msPdsn;
        static const Enum::YLeaf mobility;
        static const Enum::YLeaf voip;

};


}
}

#endif /* _CISCO_TAP2_MIB_ */

