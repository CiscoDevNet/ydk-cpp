#ifndef _CISCO_TAP2_MIB_
#define _CISCO_TAP2_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_TAP2_MIB {

class CISCOTAP2MIB : public ydk::Entity
{
    public:
        CISCOTAP2MIB();
        ~CISCOTAP2MIB();

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

        class Ctap2Mediationgroup; //type: CISCOTAP2MIB::Ctap2Mediationgroup
        class Ctap2Debuggroup; //type: CISCOTAP2MIB::Ctap2Debuggroup
        class Ctap2Mediationtable; //type: CISCOTAP2MIB::Ctap2Mediationtable
        class Ctap2Streamtable; //type: CISCOTAP2MIB::Ctap2Streamtable
        class Ctap2Debugtable; //type: CISCOTAP2MIB::Ctap2Debugtable
        class Ctap2Debugusertable; //type: CISCOTAP2MIB::Ctap2Debugusertable

        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Debuggroup> ctap2debuggroup;
        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Debugtable> ctap2debugtable;
        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Debugusertable> ctap2debugusertable;
        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Mediationgroup> ctap2mediationgroup;
        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Mediationtable> ctap2mediationtable;
        std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Streamtable> ctap2streamtable;
        
}; // CISCOTAP2MIB


class CISCOTAP2MIB::Ctap2Debuggroup : public ydk::Entity
{
    public:
        Ctap2Debuggroup();
        ~Ctap2Debuggroup();

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

        ydk::YLeaf ctap2debugage; //type: int32
        ydk::YLeaf ctap2debugmaxentries; //type: int32

}; // CISCOTAP2MIB::Ctap2Debuggroup


class CISCOTAP2MIB::Ctap2Debugtable : public ydk::Entity
{
    public:
        Ctap2Debugtable();
        ~Ctap2Debugtable();

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

        class Ctap2Debugentry; //type: CISCOTAP2MIB::Ctap2Debugtable::Ctap2Debugentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Debugtable::Ctap2Debugentry> > ctap2debugentry;
        
}; // CISCOTAP2MIB::Ctap2Debugtable


class CISCOTAP2MIB::Ctap2Debugtable::Ctap2Debugentry : public ydk::Entity
{
    public:
        Ctap2Debugentry();
        ~Ctap2Debugentry();

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

        ydk::YLeaf ctap2debugindex; //type: int32
        ydk::YLeaf ctap2debugmediationid; //type: uint32
        ydk::YLeaf ctap2debugstreamid; //type: uint32
        ydk::YLeaf ctap2debugmessage; //type: string
        ydk::YLeaf ctap2debugstatus; //type: RowStatus

}; // CISCOTAP2MIB::Ctap2Debugtable::Ctap2Debugentry


class CISCOTAP2MIB::Ctap2Debugusertable : public ydk::Entity
{
    public:
        Ctap2Debugusertable();
        ~Ctap2Debugusertable();

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

        class Ctap2Debuguserentry; //type: CISCOTAP2MIB::Ctap2Debugusertable::Ctap2Debuguserentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Debugusertable::Ctap2Debuguserentry> > ctap2debuguserentry;
        
}; // CISCOTAP2MIB::Ctap2Debugusertable


class CISCOTAP2MIB::Ctap2Debugusertable::Ctap2Debuguserentry : public ydk::Entity
{
    public:
        Ctap2Debuguserentry();
        ~Ctap2Debuguserentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Mediationtable::Ctap2Mediationentry::ctap2mediationcontentid)
        ydk::YLeaf ctap2mediationcontentid;
        ydk::YLeaf ctap2debugusername; //type: string
        ydk::YLeaf ctap2debugusertimeout; //type: string
        ydk::YLeaf ctap2debuguserstoragetype; //type: StorageType
        ydk::YLeaf ctap2debuguserstatus; //type: RowStatus

}; // CISCOTAP2MIB::Ctap2Debugusertable::Ctap2Debuguserentry


class CISCOTAP2MIB::Ctap2Mediationgroup : public ydk::Entity
{
    public:
        Ctap2Mediationgroup();
        ~Ctap2Mediationgroup();

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

        ydk::YLeaf ctap2mediationnewindex; //type: int32
        ydk::YLeaf ctap2mediationcapabilities; //type: Ctap2Mediationcapabilities

}; // CISCOTAP2MIB::Ctap2Mediationgroup


class CISCOTAP2MIB::Ctap2Mediationtable : public ydk::Entity
{
    public:
        Ctap2Mediationtable();
        ~Ctap2Mediationtable();

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

        class Ctap2Mediationentry; //type: CISCOTAP2MIB::Ctap2Mediationtable::Ctap2Mediationentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Mediationtable::Ctap2Mediationentry> > ctap2mediationentry;
        
}; // CISCOTAP2MIB::Ctap2Mediationtable


class CISCOTAP2MIB::Ctap2Mediationtable::Ctap2Mediationentry : public ydk::Entity
{
    public:
        Ctap2Mediationentry();
        ~Ctap2Mediationentry();

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

        ydk::YLeaf ctap2mediationcontentid; //type: int32
        ydk::YLeaf ctap2mediationdestaddresstype; //type: InetAddressType
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
        ydk::YLeaf ctap2mediationstatus; //type: RowStatus
        ydk::YLeaf ctap2mediationradiuskey; //type: binary
        class Ctap2Mediationtransport;

}; // CISCOTAP2MIB::Ctap2Mediationtable::Ctap2Mediationentry


class CISCOTAP2MIB::Ctap2Streamtable : public ydk::Entity
{
    public:
        Ctap2Streamtable();
        ~Ctap2Streamtable();

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

        class Ctap2Streamentry; //type: CISCOTAP2MIB::Ctap2Streamtable::Ctap2Streamentry

        std::vector<std::shared_ptr<cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Streamtable::Ctap2Streamentry> > ctap2streamentry;
        
}; // CISCOTAP2MIB::Ctap2Streamtable


class CISCOTAP2MIB::Ctap2Streamtable::Ctap2Streamentry : public ydk::Entity
{
    public:
        Ctap2Streamentry();
        ~Ctap2Streamentry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_TAP2_MIB::CISCOTAP2MIB::Ctap2Mediationtable::Ctap2Mediationentry::ctap2mediationcontentid)
        ydk::YLeaf ctap2mediationcontentid;
        ydk::YLeaf ctap2streamindex; //type: int32
        ydk::YLeaf ctap2streamtype; //type: Ctap2Streamtype
        ydk::YLeaf ctap2streaminterceptenable; //type: boolean
        ydk::YLeaf ctap2streaminterceptedpackets; //type: uint32
        ydk::YLeaf ctap2streaminterceptdrops; //type: uint32
        ydk::YLeaf ctap2streamstatus; //type: RowStatus
        ydk::YLeaf ctap2streaminterceptedhcpackets; //type: uint64
        ydk::YLeaf ctap2streamintercepthcdrops; //type: uint64
        class Ctap2Streamtype;

}; // CISCOTAP2MIB::Ctap2Streamtable::Ctap2Streamentry

class CISCOTAP2MIB::Ctap2Mediationtable::Ctap2Mediationentry::Ctap2Mediationtransport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf udp;
        static const ydk::Enum::YLeaf rtpNack;
        static const ydk::Enum::YLeaf tcp;
        static const ydk::Enum::YLeaf sctp;
        static const ydk::Enum::YLeaf rtp;
        static const ydk::Enum::YLeaf radius;

};

class CISCOTAP2MIB::Ctap2Streamtable::Ctap2Streamentry::Ctap2Streamtype : public ydk::Enum
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

