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

        class NhrpGeneralObjects; //type: NHRPMIB::NhrpGeneralObjects
        class NhrpCacheTable; //type: NHRPMIB::NhrpCacheTable
        class NhrpPurgeReqTable; //type: NHRPMIB::NhrpPurgeReqTable
        class NhrpClientTable; //type: NHRPMIB::NhrpClientTable
        class NhrpClientRegistrationTable; //type: NHRPMIB::NhrpClientRegistrationTable
        class NhrpClientNhsTable; //type: NHRPMIB::NhrpClientNhsTable
        class NhrpClientStatTable; //type: NHRPMIB::NhrpClientStatTable
        class NhrpServerTable; //type: NHRPMIB::NhrpServerTable
        class NhrpServerCacheTable; //type: NHRPMIB::NhrpServerCacheTable
        class NhrpServerNhcTable; //type: NHRPMIB::NhrpServerNhcTable
        class NhrpServerStatTable; //type: NHRPMIB::NhrpServerStatTable

        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpGeneralObjects> nhrpgeneralobjects;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpCacheTable> nhrpcachetable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpPurgeReqTable> nhrppurgereqtable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpClientTable> nhrpclienttable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpClientRegistrationTable> nhrpclientregistrationtable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpClientNhsTable> nhrpclientnhstable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpClientStatTable> nhrpclientstattable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpServerTable> nhrpservertable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpServerCacheTable> nhrpservercachetable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpServerNhcTable> nhrpservernhctable;
        std::shared_ptr<cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpServerStatTable> nhrpserverstattable;
        
}; // NHRPMIB


class NHRPMIB::NhrpGeneralObjects : public ydk::Entity
{
    public:
        NhrpGeneralObjects();
        ~NhrpGeneralObjects();

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

}; // NHRPMIB::NhrpGeneralObjects


class NHRPMIB::NhrpCacheTable : public ydk::Entity
{
    public:
        NhrpCacheTable();
        ~NhrpCacheTable();

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

        class NhrpCacheEntry; //type: NHRPMIB::NhrpCacheTable::NhrpCacheEntry

        ydk::YList nhrpcacheentry;
        
}; // NHRPMIB::NhrpCacheTable


class NHRPMIB::NhrpCacheTable::NhrpCacheEntry : public ydk::Entity
{
    public:
        NhrpCacheEntry();
        ~NhrpCacheEntry();

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
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf nhrpcacheindex; //type: uint32
        ydk::YLeaf nhrpcacheprefixlength; //type: int32
        ydk::YLeaf nhrpcachenexthopinternetworkaddr; //type: binary
        ydk::YLeaf nhrpcachenbmaaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpcachenbmaaddr; //type: binary
        ydk::YLeaf nhrpcachenbmasubaddr; //type: binary
        ydk::YLeaf nhrpcachetype; //type: NhrpCacheType
        ydk::YLeaf nhrpcachestate; //type: NhrpCacheState
        ydk::YLeaf nhrpcacheholdingtimevalid; //type: boolean
        ydk::YLeaf nhrpcacheholdingtime; //type: uint32
        ydk::YLeaf nhrpcachenegotiatedmtu; //type: int32
        ydk::YLeaf nhrpcachepreference; //type: int32
        ydk::YLeaf nhrpcachestoragetype; //type: StorageType
        ydk::YLeaf nhrpcacherowstatus; //type: RowStatus
        class NhrpCacheType;
        class NhrpCacheState;

}; // NHRPMIB::NhrpCacheTable::NhrpCacheEntry


class NHRPMIB::NhrpPurgeReqTable : public ydk::Entity
{
    public:
        NhrpPurgeReqTable();
        ~NhrpPurgeReqTable();

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

        class NhrpPurgeReqEntry; //type: NHRPMIB::NhrpPurgeReqTable::NhrpPurgeReqEntry

        ydk::YList nhrppurgereqentry;
        
}; // NHRPMIB::NhrpPurgeReqTable


class NHRPMIB::NhrpPurgeReqTable::NhrpPurgeReqEntry : public ydk::Entity
{
    public:
        NhrpPurgeReqEntry();
        ~NhrpPurgeReqEntry();

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

}; // NHRPMIB::NhrpPurgeReqTable::NhrpPurgeReqEntry


class NHRPMIB::NhrpClientTable : public ydk::Entity
{
    public:
        NhrpClientTable();
        ~NhrpClientTable();

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

        class NhrpClientEntry; //type: NHRPMIB::NhrpClientTable::NhrpClientEntry

        ydk::YList nhrpcliententry;
        
}; // NHRPMIB::NhrpClientTable


class NHRPMIB::NhrpClientTable::NhrpClientEntry : public ydk::Entity
{
    public:
        NhrpClientEntry();
        ~NhrpClientEntry();

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

}; // NHRPMIB::NhrpClientTable::NhrpClientEntry


class NHRPMIB::NhrpClientRegistrationTable : public ydk::Entity
{
    public:
        NhrpClientRegistrationTable();
        ~NhrpClientRegistrationTable();

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

        class NhrpClientRegistrationEntry; //type: NHRPMIB::NhrpClientRegistrationTable::NhrpClientRegistrationEntry

        ydk::YList nhrpclientregistrationentry;
        
}; // NHRPMIB::NhrpClientRegistrationTable


class NHRPMIB::NhrpClientRegistrationTable::NhrpClientRegistrationEntry : public ydk::Entity
{
    public:
        NhrpClientRegistrationEntry();
        ~NhrpClientRegistrationEntry();

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

        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpClientTable::NhrpClientEntry::nhrpclientindex)
        ydk::YLeaf nhrpclientindex;
        ydk::YLeaf nhrpclientregindex; //type: uint32
        ydk::YLeaf nhrpclientreguniqueness; //type: NhrpClientRegUniqueness
        ydk::YLeaf nhrpclientregstate; //type: NhrpClientRegState
        ydk::YLeaf nhrpclientregrowstatus; //type: RowStatus
        class NhrpClientRegUniqueness;
        class NhrpClientRegState;

}; // NHRPMIB::NhrpClientRegistrationTable::NhrpClientRegistrationEntry


class NHRPMIB::NhrpClientNhsTable : public ydk::Entity
{
    public:
        NhrpClientNhsTable();
        ~NhrpClientNhsTable();

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

        class NhrpClientNhsEntry; //type: NHRPMIB::NhrpClientNhsTable::NhrpClientNhsEntry

        ydk::YList nhrpclientnhsentry;
        
}; // NHRPMIB::NhrpClientNhsTable


class NHRPMIB::NhrpClientNhsTable::NhrpClientNhsEntry : public ydk::Entity
{
    public:
        NhrpClientNhsEntry();
        ~NhrpClientNhsEntry();

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

        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpClientTable::NhrpClientEntry::nhrpclientindex)
        ydk::YLeaf nhrpclientindex;
        ydk::YLeaf nhrpclientnhsindex; //type: uint32
        ydk::YLeaf nhrpclientnhsinternetworkaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpclientnhsinternetworkaddr; //type: binary
        ydk::YLeaf nhrpclientnhsnbmaaddrtype; //type: AddressFamilyNumbers
        ydk::YLeaf nhrpclientnhsnbmaaddr; //type: binary
        ydk::YLeaf nhrpclientnhsnbmasubaddr; //type: binary
        ydk::YLeaf nhrpclientnhsinuse; //type: boolean
        ydk::YLeaf nhrpclientnhsrowstatus; //type: RowStatus

}; // NHRPMIB::NhrpClientNhsTable::NhrpClientNhsEntry


class NHRPMIB::NhrpClientStatTable : public ydk::Entity
{
    public:
        NhrpClientStatTable();
        ~NhrpClientStatTable();

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

        class NhrpClientStatEntry; //type: NHRPMIB::NhrpClientStatTable::NhrpClientStatEntry

        ydk::YList nhrpclientstatentry;
        
}; // NHRPMIB::NhrpClientStatTable


class NHRPMIB::NhrpClientStatTable::NhrpClientStatEntry : public ydk::Entity
{
    public:
        NhrpClientStatEntry();
        ~NhrpClientStatEntry();

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

        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpClientTable::NhrpClientEntry::nhrpclientindex)
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

}; // NHRPMIB::NhrpClientStatTable::NhrpClientStatEntry


class NHRPMIB::NhrpServerTable : public ydk::Entity
{
    public:
        NhrpServerTable();
        ~NhrpServerTable();

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

        class NhrpServerEntry; //type: NHRPMIB::NhrpServerTable::NhrpServerEntry

        ydk::YList nhrpserverentry;
        
}; // NHRPMIB::NhrpServerTable


class NHRPMIB::NhrpServerTable::NhrpServerEntry : public ydk::Entity
{
    public:
        NhrpServerEntry();
        ~NhrpServerEntry();

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

}; // NHRPMIB::NhrpServerTable::NhrpServerEntry


class NHRPMIB::NhrpServerCacheTable : public ydk::Entity
{
    public:
        NhrpServerCacheTable();
        ~NhrpServerCacheTable();

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

        class NhrpServerCacheEntry; //type: NHRPMIB::NhrpServerCacheTable::NhrpServerCacheEntry

        ydk::YList nhrpservercacheentry;
        
}; // NHRPMIB::NhrpServerCacheTable


class NHRPMIB::NhrpServerCacheTable::NhrpServerCacheEntry : public ydk::Entity
{
    public:
        NhrpServerCacheEntry();
        ~NhrpServerCacheEntry();

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
        //type: binary (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpCacheTable::NhrpCacheEntry::nhrpcacheinternetworkaddr)
        ydk::YLeaf nhrpcacheinternetworkaddr;
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpCacheTable::NhrpCacheEntry::nhrpcacheindex)
        ydk::YLeaf nhrpcacheindex;
        ydk::YLeaf nhrpservercacheauthoritative; //type: boolean
        ydk::YLeaf nhrpservercacheuniqueness; //type: boolean

}; // NHRPMIB::NhrpServerCacheTable::NhrpServerCacheEntry


class NHRPMIB::NhrpServerNhcTable : public ydk::Entity
{
    public:
        NhrpServerNhcTable();
        ~NhrpServerNhcTable();

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

        class NhrpServerNhcEntry; //type: NHRPMIB::NhrpServerNhcTable::NhrpServerNhcEntry

        ydk::YList nhrpservernhcentry;
        
}; // NHRPMIB::NhrpServerNhcTable


class NHRPMIB::NhrpServerNhcTable::NhrpServerNhcEntry : public ydk::Entity
{
    public:
        NhrpServerNhcEntry();
        ~NhrpServerNhcEntry();

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

        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpServerTable::NhrpServerEntry::nhrpserverindex)
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

}; // NHRPMIB::NhrpServerNhcTable::NhrpServerNhcEntry


class NHRPMIB::NhrpServerStatTable : public ydk::Entity
{
    public:
        NhrpServerStatTable();
        ~NhrpServerStatTable();

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

        class NhrpServerStatEntry; //type: NHRPMIB::NhrpServerStatTable::NhrpServerStatEntry

        ydk::YList nhrpserverstatentry;
        
}; // NHRPMIB::NhrpServerStatTable


class NHRPMIB::NhrpServerStatTable::NhrpServerStatEntry : public ydk::Entity
{
    public:
        NhrpServerStatEntry();
        ~NhrpServerStatEntry();

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

        //type: uint32 (refers to cisco_ios_xe::NHRP_MIB::NHRPMIB::NhrpServerTable::NhrpServerEntry::nhrpserverindex)
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

}; // NHRPMIB::NhrpServerStatTable::NhrpServerStatEntry

class NHRPMIB::NhrpCacheTable::NhrpCacheEntry::NhrpCacheType : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "register") return 2;
            if (name == "resolveAuthoritative") return 3;
            if (name == "resoveNonauthoritative") return 4;
            if (name == "transit") return 5;
            if (name == "administrativelyAdded") return 6;
            if (name == "atmarp") return 7;
            if (name == "scsp") return 8;
            return -1;
        }
};

class NHRPMIB::NhrpCacheTable::NhrpCacheEntry::NhrpCacheState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf incomplete;
        static const ydk::Enum::YLeaf ackReply;
        static const ydk::Enum::YLeaf nakReply;

        static int get_enum_value(const std::string & name) {
            if (name == "incomplete") return 1;
            if (name == "ackReply") return 2;
            if (name == "nakReply") return 3;
            return -1;
        }
};

class NHRPMIB::NhrpClientRegistrationTable::NhrpClientRegistrationEntry::NhrpClientRegUniqueness : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf requestUnique;
        static const ydk::Enum::YLeaf requestNotUnique;

        static int get_enum_value(const std::string & name) {
            if (name == "requestUnique") return 1;
            if (name == "requestNotUnique") return 2;
            return -1;
        }
};

class NHRPMIB::NhrpClientRegistrationTable::NhrpClientRegistrationEntry::NhrpClientRegState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf registering;
        static const ydk::Enum::YLeaf ackRegisterReply;
        static const ydk::Enum::YLeaf nakRegisterReply;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "registering") return 2;
            if (name == "ackRegisterReply") return 3;
            if (name == "nakRegisterReply") return 4;
            return -1;
        }
};


}
}

#endif /* _NHRP_MIB_ */

