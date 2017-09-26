#ifndef _NHRP_MIB_
#define _NHRP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace NHRP_MIB {

class NHRPMIB : public ydk::Entity
{
    public:
        NHRPMIB();
        ~NHRPMIB();

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

        class Nhrpgeneralobjects; //type: NHRPMIB::Nhrpgeneralobjects
        class Nhrpcachetable; //type: NHRPMIB::Nhrpcachetable
        class Nhrppurgereqtable; //type: NHRPMIB::Nhrppurgereqtable
        class Nhrpclienttable; //type: NHRPMIB::Nhrpclienttable
        class Nhrpclientregistrationtable; //type: NHRPMIB::Nhrpclientregistrationtable
        class Nhrpclientnhstable; //type: NHRPMIB::Nhrpclientnhstable
        class Nhrpclientstattable; //type: NHRPMIB::Nhrpclientstattable
        class Nhrpservertable; //type: NHRPMIB::Nhrpservertable
        class Nhrpservercachetable; //type: NHRPMIB::Nhrpservercachetable
        class Nhrpservernhctable; //type: NHRPMIB::Nhrpservernhctable
        class Nhrpserverstattable; //type: NHRPMIB::Nhrpserverstattable

        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpcachetable> nhrpcachetable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclientnhstable> nhrpclientnhstable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclientregistrationtable> nhrpclientregistrationtable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclientstattable> nhrpclientstattable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclienttable> nhrpclienttable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpgeneralobjects> nhrpgeneralobjects;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrppurgereqtable> nhrppurgereqtable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpservercachetable> nhrpservercachetable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpservernhctable> nhrpservernhctable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpserverstattable> nhrpserverstattable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpservertable> nhrpservertable;
        
}; // NHRPMIB


class NHRPMIB::Nhrpcachetable : public ydk::Entity
{
    public:
        Nhrpcachetable();
        ~Nhrpcachetable();

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

        class Nhrpcacheentry; //type: NHRPMIB::Nhrpcachetable::Nhrpcacheentry

        std::vector<std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpcachetable::Nhrpcacheentry> > nhrpcacheentry;
        
}; // NHRPMIB::Nhrpcachetable


class NHRPMIB::Nhrpcachetable::Nhrpcacheentry : public ydk::Entity
{
    public:
        Nhrpcacheentry();
        ~Nhrpcacheentry();

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

        ydk::YLeaf nhrpcacheinternetworkaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpcacheinternetworkaddr; //type: binary
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf nhrpcacheindex; //type: uint32
        ydk::YLeaf nhrpcacheprefixlength; //type: int32
        ydk::YLeaf nhrpcachenexthopinternetworkaddr; //type: binary
        ydk::YLeaf nhrpcachenbmaaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpcachenbmaaddr; //type: binary
        ydk::YLeaf nhrpcachenbmasubaddr; //type: binary
        ydk::YLeaf nhrpcachetype; //type: Nhrpcachetype
        ydk::YLeaf nhrpcachestate; //type: Nhrpcachestate
        ydk::YLeaf nhrpcacheholdingtimevalid; //type: boolean
        ydk::YLeaf nhrpcacheholdingtime; //type: uint32
        ydk::YLeaf nhrpcachenegotiatedmtu; //type: int32
        ydk::YLeaf nhrpcachepreference; //type: int32
        ydk::YLeaf nhrpcachestoragetype; //type: StorageType
        ydk::YLeaf nhrpcacherowstatus; //type: RowStatus
        class Nhrpcachetype;
        class Nhrpcachestate;

}; // NHRPMIB::Nhrpcachetable::Nhrpcacheentry


class NHRPMIB::Nhrpclientnhstable : public ydk::Entity
{
    public:
        Nhrpclientnhstable();
        ~Nhrpclientnhstable();

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

        class Nhrpclientnhsentry; //type: NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry

        std::vector<std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry> > nhrpclientnhsentry;
        
}; // NHRPMIB::Nhrpclientnhstable


class NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry : public ydk::Entity
{
    public:
        Nhrpclientnhsentry();
        ~Nhrpclientnhsentry();

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

        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclienttable::Nhrpcliententry::nhrpclientindex)
        ydk::YLeaf nhrpclientindex;
        ydk::YLeaf nhrpclientnhsindex; //type: uint32
        ydk::YLeaf nhrpclientnhsinternetworkaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpclientnhsinternetworkaddr; //type: binary
        ydk::YLeaf nhrpclientnhsnbmaaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpclientnhsnbmaaddr; //type: binary
        ydk::YLeaf nhrpclientnhsnbmasubaddr; //type: binary
        ydk::YLeaf nhrpclientnhsinuse; //type: boolean
        ydk::YLeaf nhrpclientnhsrowstatus; //type: RowStatus

}; // NHRPMIB::Nhrpclientnhstable::Nhrpclientnhsentry


class NHRPMIB::Nhrpclientregistrationtable : public ydk::Entity
{
    public:
        Nhrpclientregistrationtable();
        ~Nhrpclientregistrationtable();

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

        class Nhrpclientregistrationentry; //type: NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry

        std::vector<std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry> > nhrpclientregistrationentry;
        
}; // NHRPMIB::Nhrpclientregistrationtable


class NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry : public ydk::Entity
{
    public:
        Nhrpclientregistrationentry();
        ~Nhrpclientregistrationentry();

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

        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclienttable::Nhrpcliententry::nhrpclientindex)
        ydk::YLeaf nhrpclientindex;
        ydk::YLeaf nhrpclientregindex; //type: uint32
        ydk::YLeaf nhrpclientreguniqueness; //type: Nhrpclientreguniqueness
        ydk::YLeaf nhrpclientregstate; //type: Nhrpclientregstate
        ydk::YLeaf nhrpclientregrowstatus; //type: RowStatus
        class Nhrpclientreguniqueness;
        class Nhrpclientregstate;

}; // NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry


class NHRPMIB::Nhrpclientstattable : public ydk::Entity
{
    public:
        Nhrpclientstattable();
        ~Nhrpclientstattable();

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

        class Nhrpclientstatentry; //type: NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry

        std::vector<std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry> > nhrpclientstatentry;
        
}; // NHRPMIB::Nhrpclientstattable


class NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry : public ydk::Entity
{
    public:
        Nhrpclientstatentry();
        ~Nhrpclientstatentry();

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

        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclienttable::Nhrpcliententry::nhrpclientindex)
        ydk::YLeaf nhrpclientindex;
        ydk::YLeaf nhrpclientstattxresolvereq; //type: uint32
        ydk::YLeaf nhrpclientstatrxresolvereplyack; //type: uint32
        ydk::YLeaf nhrpclientstatrxresolvereplynakprohibited; //type: uint32
        ydk::YLeaf nhrpclientstatrxresolvereplynakinsufresources; //type: uint32
        ydk::YLeaf nhrpclientstatrxresolvereplynaknobinding; //type: uint32
        ydk::YLeaf nhrpclientstatrxresolvereplynaknotunique; //type: uint32
        ydk::YLeaf nhrpclientstattxregisterreq; //type: uint32
        ydk::YLeaf nhrpclientstatrxregisterack; //type: uint32
        ydk::YLeaf nhrpclientstatrxregisternakprohibited; //type: uint32
        ydk::YLeaf nhrpclientstatrxregisternakinsufresources; //type: uint32
        ydk::YLeaf nhrpclientstatrxregisternakalreadyreg; //type: uint32
        ydk::YLeaf nhrpclientstatrxpurgereq; //type: uint32
        ydk::YLeaf nhrpclientstattxpurgereq; //type: uint32
        ydk::YLeaf nhrpclientstatrxpurgereply; //type: uint32
        ydk::YLeaf nhrpclientstattxpurgereply; //type: uint32
        ydk::YLeaf nhrpclientstattxerrorindication; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrunrecognizedextension; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrloopdetected; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrprotoaddrunreachable; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrprotoerror; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrsdusizeexceeded; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrinvalidextension; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrauthenticationfailure; //type: uint32
        ydk::YLeaf nhrpclientstatrxerrhopcountexceeded; //type: uint32
        ydk::YLeaf nhrpclientstatdiscontinuitytime; //type: uint32

}; // NHRPMIB::Nhrpclientstattable::Nhrpclientstatentry


class NHRPMIB::Nhrpclienttable : public ydk::Entity
{
    public:
        Nhrpclienttable();
        ~Nhrpclienttable();

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

        class Nhrpcliententry; //type: NHRPMIB::Nhrpclienttable::Nhrpcliententry

        std::vector<std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpclienttable::Nhrpcliententry> > nhrpcliententry;
        
}; // NHRPMIB::Nhrpclienttable


class NHRPMIB::Nhrpclienttable::Nhrpcliententry : public ydk::Entity
{
    public:
        Nhrpcliententry();
        ~Nhrpcliententry();

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

        ydk::YLeaf nhrpclientindex; //type: uint32
        ydk::YLeaf nhrpclientinternetworkaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpclientinternetworkaddr; //type: binary
        ydk::YLeaf nhrpclientnbmaaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpclientnbmaaddr; //type: binary
        ydk::YLeaf nhrpclientnbmasubaddr; //type: binary
        ydk::YLeaf nhrpclientinitialrequesttimeout; //type: int32
        ydk::YLeaf nhrpclientregistrationrequestretries; //type: int32
        ydk::YLeaf nhrpclientresolutionrequestretries; //type: int32
        ydk::YLeaf nhrpclientpurgerequestretries; //type: int32
        ydk::YLeaf nhrpclientdefaultmtu; //type: uint32
        ydk::YLeaf nhrpclientholdtime; //type: uint32
        ydk::YLeaf nhrpclientrequestid; //type: uint32
        ydk::YLeaf nhrpclientstoragetype; //type: StorageType
        ydk::YLeaf nhrpclientrowstatus; //type: RowStatus

}; // NHRPMIB::Nhrpclienttable::Nhrpcliententry


class NHRPMIB::Nhrpgeneralobjects : public ydk::Entity
{
    public:
        Nhrpgeneralobjects();
        ~Nhrpgeneralobjects();

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

        ydk::YLeaf nhrpnextindex; //type: uint32

}; // NHRPMIB::Nhrpgeneralobjects


class NHRPMIB::Nhrppurgereqtable : public ydk::Entity
{
    public:
        Nhrppurgereqtable();
        ~Nhrppurgereqtable();

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

        class Nhrppurgereqentry; //type: NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry

        std::vector<std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry> > nhrppurgereqentry;
        
}; // NHRPMIB::Nhrppurgereqtable


class NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry : public ydk::Entity
{
    public:
        Nhrppurgereqentry();
        ~Nhrppurgereqentry();

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

        ydk::YLeaf nhrppurgeindex; //type: uint32
        ydk::YLeaf nhrppurgecacheidentifier; //type: uint32
        ydk::YLeaf nhrppurgeprefixlength; //type: int32
        ydk::YLeaf nhrppurgerequestid; //type: uint32
        ydk::YLeaf nhrppurgereplyexpected; //type: boolean
        ydk::YLeaf nhrppurgerowstatus; //type: RowStatus

}; // NHRPMIB::Nhrppurgereqtable::Nhrppurgereqentry


class NHRPMIB::Nhrpservercachetable : public ydk::Entity
{
    public:
        Nhrpservercachetable();
        ~Nhrpservercachetable();

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

        class Nhrpservercacheentry; //type: NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry

        std::vector<std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry> > nhrpservercacheentry;
        
}; // NHRPMIB::Nhrpservercachetable


class NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry : public ydk::Entity
{
    public:
        Nhrpservercacheentry();
        ~Nhrpservercacheentry();

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

        ydk::YLeaf nhrpcacheinternetworkaddrtype; //type: AddressFamilyNumbers
        //type: binary (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpcachetable::Nhrpcacheentry::nhrpcacheinternetworkaddr)
        ydk::YLeaf nhrpcacheinternetworkaddr;
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpcachetable::Nhrpcacheentry::nhrpcacheindex)
        ydk::YLeaf nhrpcacheindex;
        ydk::YLeaf nhrpservercacheauthoritative; //type: boolean
        ydk::YLeaf nhrpservercacheuniqueness; //type: boolean

}; // NHRPMIB::Nhrpservercachetable::Nhrpservercacheentry


class NHRPMIB::Nhrpservernhctable : public ydk::Entity
{
    public:
        Nhrpservernhctable();
        ~Nhrpservernhctable();

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

        class Nhrpservernhcentry; //type: NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry

        std::vector<std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry> > nhrpservernhcentry;
        
}; // NHRPMIB::Nhrpservernhctable


class NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry : public ydk::Entity
{
    public:
        Nhrpservernhcentry();
        ~Nhrpservernhcentry();

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

        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpservertable::Nhrpserverentry::nhrpserverindex)
        ydk::YLeaf nhrpserverindex;
        ydk::YLeaf nhrpservernhcindex; //type: uint32
        ydk::YLeaf nhrpservernhcprefixlength; //type: int32
        ydk::YLeaf nhrpservernhcinternetworkaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpservernhcinternetworkaddr; //type: binary
        ydk::YLeaf nhrpservernhcnbmaaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpservernhcnbmaaddr; //type: binary
        ydk::YLeaf nhrpservernhcnbmasubaddr; //type: binary
        ydk::YLeaf nhrpservernhcinuse; //type: boolean
        ydk::YLeaf nhrpservernhcrowstatus; //type: RowStatus

}; // NHRPMIB::Nhrpservernhctable::Nhrpservernhcentry


class NHRPMIB::Nhrpserverstattable : public ydk::Entity
{
    public:
        Nhrpserverstattable();
        ~Nhrpserverstattable();

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

        class Nhrpserverstatentry; //type: NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry

        std::vector<std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry> > nhrpserverstatentry;
        
}; // NHRPMIB::Nhrpserverstattable


class NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry : public ydk::Entity
{
    public:
        Nhrpserverstatentry();
        ~Nhrpserverstatentry();

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

        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpservertable::Nhrpserverentry::nhrpserverindex)
        ydk::YLeaf nhrpserverindex;
        ydk::YLeaf nhrpserverstatrxresolvereq; //type: uint32
        ydk::YLeaf nhrpserverstattxresolvereplyack; //type: uint32
        ydk::YLeaf nhrpserverstattxresolvereplynakprohibited; //type: uint32
        ydk::YLeaf nhrpserverstattxresolvereplynakinsufresources; //type: uint32
        ydk::YLeaf nhrpserverstattxresolvereplynaknobinding; //type: uint32
        ydk::YLeaf nhrpserverstattxresolvereplynaknotunique; //type: uint32
        ydk::YLeaf nhrpserverstatrxregisterreq; //type: uint32
        ydk::YLeaf nhrpserverstattxregisterack; //type: uint32
        ydk::YLeaf nhrpserverstattxregisternakprohibited; //type: uint32
        ydk::YLeaf nhrpserverstattxregisternakinsufresources; //type: uint32
        ydk::YLeaf nhrpserverstattxregisternakalreadyreg; //type: uint32
        ydk::YLeaf nhrpserverstatrxpurgereq; //type: uint32
        ydk::YLeaf nhrpserverstattxpurgereq; //type: uint32
        ydk::YLeaf nhrpserverstatrxpurgereply; //type: uint32
        ydk::YLeaf nhrpserverstattxpurgereply; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrunrecognizedextension; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrloopdetected; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrprotoaddrunreachable; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrprotoerror; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrsdusizeexceeded; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrinvalidextension; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrinvalidresreplyreceived; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrauthenticationfailure; //type: uint32
        ydk::YLeaf nhrpserverstatrxerrhopcountexceeded; //type: uint32
        ydk::YLeaf nhrpserverstattxerrunrecognizedextension; //type: uint32
        ydk::YLeaf nhrpserverstattxerrloopdetected; //type: uint32
        ydk::YLeaf nhrpserverstattxerrprotoaddrunreachable; //type: uint32
        ydk::YLeaf nhrpserverstattxerrprotoerror; //type: uint32
        ydk::YLeaf nhrpserverstattxerrsdusizeexceeded; //type: uint32
        ydk::YLeaf nhrpserverstattxerrinvalidextension; //type: uint32
        ydk::YLeaf nhrpserverstattxerrauthenticationfailure; //type: uint32
        ydk::YLeaf nhrpserverstattxerrhopcountexceeded; //type: uint32
        ydk::YLeaf nhrpserverstatfwresolvereq; //type: uint32
        ydk::YLeaf nhrpserverstatfwresolvereply; //type: uint32
        ydk::YLeaf nhrpserverstatfwregisterreq; //type: uint32
        ydk::YLeaf nhrpserverstatfwregisterreply; //type: uint32
        ydk::YLeaf nhrpserverstatfwpurgereq; //type: uint32
        ydk::YLeaf nhrpserverstatfwpurgereply; //type: uint32
        ydk::YLeaf nhrpserverstatfwerrorindication; //type: uint32
        ydk::YLeaf nhrpserverstatdiscontinuitytime; //type: uint32

}; // NHRPMIB::Nhrpserverstattable::Nhrpserverstatentry


class NHRPMIB::Nhrpservertable : public ydk::Entity
{
    public:
        Nhrpservertable();
        ~Nhrpservertable();

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

        class Nhrpserverentry; //type: NHRPMIB::Nhrpservertable::Nhrpserverentry

        std::vector<std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::Nhrpservertable::Nhrpserverentry> > nhrpserverentry;
        
}; // NHRPMIB::Nhrpservertable


class NHRPMIB::Nhrpservertable::Nhrpserverentry : public ydk::Entity
{
    public:
        Nhrpserverentry();
        ~Nhrpserverentry();

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

        ydk::YLeaf nhrpserverindex; //type: uint32
        ydk::YLeaf nhrpserverinternetworkaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpserverinternetworkaddr; //type: binary
        ydk::YLeaf nhrpservernbmaaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpservernbmaaddr; //type: binary
        ydk::YLeaf nhrpservernbmasubaddr; //type: binary
        ydk::YLeaf nhrpserverstoragetype; //type: StorageType
        ydk::YLeaf nhrpserverrowstatus; //type: RowStatus

}; // NHRPMIB::Nhrpservertable::Nhrpserverentry

class NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf register_;
        static const ydk::Enum::YLeaf resolveAuthoritative;
        static const ydk::Enum::YLeaf resoveNonauthoritative;
        static const ydk::Enum::YLeaf transit;
        static const ydk::Enum::YLeaf administrativelyAdded;
        static const ydk::Enum::YLeaf atmarp;
        static const ydk::Enum::YLeaf scsp;

};

class NHRPMIB::Nhrpcachetable::Nhrpcacheentry::Nhrpcachestate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf ackReply;
        static const ydk::Enum::YLeaf nakReply;

};

class NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientreguniqueness : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf requestUnique;
        static const ydk::Enum::YLeaf requestNotUnique;

};

class NHRPMIB::Nhrpclientregistrationtable::Nhrpclientregistrationentry::Nhrpclientregstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf registering;
        static const ydk::Enum::YLeaf ackRegisterReply;
        static const ydk::Enum::YLeaf nakRegisterReply;

};


}
}

#endif /* _NHRP_MIB_ */

