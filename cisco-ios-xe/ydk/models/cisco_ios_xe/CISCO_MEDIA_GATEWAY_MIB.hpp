#ifndef _CISCO_MEDIA_GATEWAY_MIB_
#define _CISCO_MEDIA_GATEWAY_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_MEDIA_GATEWAY_MIB {

class CISCOMEDIAGATEWAYMIB : public ydk::Entity
{
    public:
        CISCOMEDIAGATEWAYMIB();
        ~CISCOMEDIAGATEWAYMIB();

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

        class CMediaGwTable; //type: CISCOMEDIAGATEWAYMIB::CMediaGwTable
        class CmgwSignalProtocolTable; //type: CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable
        class CMediaGwIpConfigTable; //type: CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable
        class CMediaGwDomainNameConfigTable; //type: CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable
        class CMediaGwDnsIpConfigTable; //type: CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable
        class CmgwLifTable; //type: CISCOMEDIAGATEWAYMIB::CmgwLifTable
        class CMediaGwCallControlConfigTable; //type: CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable
        class CMediaGwRscStatsTable; //type: CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable

        std::shared_ptr<cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwTable> cmediagwtable;
        std::shared_ptr<cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable> cmgwsignalprotocoltable;
        std::shared_ptr<cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable> cmediagwipconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable> cmediagwdomainnameconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable> cmediagwdnsipconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CmgwLifTable> cmgwliftable;
        std::shared_ptr<cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable> cmediagwcallcontrolconfigtable;
        std::shared_ptr<cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable> cmediagwrscstatstable;
        
}; // CISCOMEDIAGATEWAYMIB


class CISCOMEDIAGATEWAYMIB::CMediaGwTable : public ydk::Entity
{
    public:
        CMediaGwTable();
        ~CMediaGwTable();

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

        class CMediaGwEntry; //type: CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry

        ydk::YList cmediagwentry;
        
}; // CISCOMEDIAGATEWAYMIB::CMediaGwTable


class CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry : public ydk::Entity
{
    public:
        CMediaGwEntry();
        ~CMediaGwEntry();

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

        ydk::YLeaf cmgwindex; //type: int32
        ydk::YLeaf cmgwdomainname; //type: string
        ydk::YLeaf cmgwphysicalindex; //type: int32
        ydk::YLeaf cmgwservicestate; //type: CGwServiceState
        ydk::YLeaf cmgwadminstate; //type: CGwAdminState
        ydk::YLeaf cmgwgracetime; //type: int32
        ydk::YLeaf cmgwvtmappingmode; //type: CmgwVtMappingMode
        ydk::YLeaf cmgwsrcfilterenabled; //type: boolean
        ydk::YLeaf cmgwlawinterceptenabled; //type: boolean
        ydk::YLeaf cmgwv23enabled; //type: boolean
        class CmgwVtMappingMode;

}; // CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry


class CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable : public ydk::Entity
{
    public:
        CmgwSignalProtocolTable();
        ~CmgwSignalProtocolTable();

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

        class CmgwSignalProtocolEntry; //type: CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry

        ydk::YList cmgwsignalprotocolentry;
        
}; // CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable


class CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry : public ydk::Entity
{
    public:
        CmgwSignalProtocolEntry();
        ~CmgwSignalProtocolEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwsignalprotocolindex; //type: int32
        ydk::YLeaf cmgwsignalprotocol; //type: CmgwSignalProtocol
        ydk::YLeaf cmgwsignalprotocolversion; //type: string
        ydk::YLeaf cmgwsignalprotocolport; //type: int32
        ydk::YLeaf cmgwsignalmgcprotocolport; //type: uint16
        ydk::YLeaf cmgwsignalprotocolpreference; //type: int32
        ydk::YLeaf cmgwsignalprotocolconfigver; //type: string
        class CmgwSignalProtocol;

}; // CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry


class CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable : public ydk::Entity
{
    public:
        CMediaGwIpConfigTable();
        ~CMediaGwIpConfigTable();

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

        class CMediaGwIpConfigEntry; //type: CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry

        ydk::YList cmediagwipconfigentry;
        
}; // CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable


class CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry : public ydk::Entity
{
    public:
        CMediaGwIpConfigEntry();
        ~CMediaGwIpConfigEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwipconfigindex; //type: int32
        ydk::YLeaf cmgwipconfigifindex; //type: int32
        ydk::YLeaf cmgwipconfigvpi; //type: int32
        ydk::YLeaf cmgwipconfigvci; //type: int32
        ydk::YLeaf cmgwipconfigaddrtype; //type: InetAddressType
        ydk::YLeaf cmgwipconfigaddress; //type: binary
        ydk::YLeaf cmgwipconfigsubnetmask; //type: uint32
        ydk::YLeaf cmgwipconfigdefaultgwip; //type: boolean
        ydk::YLeaf cmgwipconfigforremotemapping; //type: boolean
        ydk::YLeaf cmgwipconfigrowstatus; //type: RowStatus

}; // CISCOMEDIAGATEWAYMIB::CMediaGwIpConfigTable::CMediaGwIpConfigEntry


class CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable : public ydk::Entity
{
    public:
        CMediaGwDomainNameConfigTable();
        ~CMediaGwDomainNameConfigTable();

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

        class CMediaGwDomainNameConfigEntry; //type: CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry

        ydk::YList cmediagwdomainnameconfigentry;
        
}; // CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable


class CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry : public ydk::Entity
{
    public:
        CMediaGwDomainNameConfigEntry();
        ~CMediaGwDomainNameConfigEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwconfigdomainnameindex; //type: int32
        ydk::YLeaf cmgwconfigdomainnameentity; //type: CmgwConfigDomainNameEntity
        ydk::YLeaf cmgwconfigdomainname; //type: string
        ydk::YLeaf cmgwconfigdomainnamerowstatus; //type: RowStatus
        class CmgwConfigDomainNameEntity;

}; // CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry


class CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable : public ydk::Entity
{
    public:
        CMediaGwDnsIpConfigTable();
        ~CMediaGwDnsIpConfigTable();

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

        class CMediaGwDnsIpConfigEntry; //type: CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry

        ydk::YList cmediagwdnsipconfigentry;
        
}; // CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable


class CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry : public ydk::Entity
{
    public:
        CMediaGwDnsIpConfigEntry();
        ~CMediaGwDnsIpConfigEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwdnsipindex; //type: int32
        ydk::YLeaf cmgwdnsdomainname; //type: string
        ydk::YLeaf cmgwdnsiptype; //type: InetAddressType
        ydk::YLeaf cmgwdnsip; //type: binary
        ydk::YLeaf cmgwdnsiprowstatus; //type: RowStatus

}; // CISCOMEDIAGATEWAYMIB::CMediaGwDnsIpConfigTable::CMediaGwDnsIpConfigEntry


class CISCOMEDIAGATEWAYMIB::CmgwLifTable : public ydk::Entity
{
    public:
        CmgwLifTable();
        ~CmgwLifTable();

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

        class CmgwLifEntry; //type: CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry

        ydk::YList cmgwlifentry;
        
}; // CISCOMEDIAGATEWAYMIB::CmgwLifTable


class CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry : public ydk::Entity
{
    public:
        CmgwLifEntry();
        ~CmgwLifEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwlifnumber; //type: uint32
        ydk::YLeaf cmgwlifpvccount; //type: uint32
        ydk::YLeaf cmgwlifvoiceifcount; //type: uint32

}; // CISCOMEDIAGATEWAYMIB::CmgwLifTable::CmgwLifEntry


class CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable : public ydk::Entity
{
    public:
        CMediaGwCallControlConfigTable();
        ~CMediaGwCallControlConfigTable();

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

        class CMediaGwCallControlConfigEntry; //type: CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry

        ydk::YList cmediagwcallcontrolconfigentry;
        
}; // CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable


class CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry : public ydk::Entity
{
    public:
        CMediaGwCallControlConfigEntry();
        ~CMediaGwCallControlConfigEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmediagwcccfgcontroltos; //type: uint32
        ydk::YLeaf cmediagwcccfgbearertos; //type: uint32
        ydk::YLeaf cmediagwcccfgntepayload; //type: uint32
        ydk::YLeaf cmediagwcccfgnsepayload; //type: uint32
        ydk::YLeaf cmediagwcccfgnseresptimer; //type: uint32
        ydk::YLeaf cmediagwcccfgvbdjitterdelaymode; //type: CCallControlJitterDelayMode
        ydk::YLeaf cmediagwcccfgvbdjittermaxdelay; //type: uint32
        ydk::YLeaf cmediagwcccfgvbdjitternomdelay; //type: uint32
        ydk::YLeaf cmediagwcccfgvbdjittermindelay; //type: uint32
        ydk::YLeaf cmediagwcccfgdefaulttoneplanid; //type: uint32
        ydk::YLeaf cmediagwcccfgdescrinfoenabled; //type: boolean
        ydk::YLeaf cmediagwcccfgdsnameprefix; //type: string
        ydk::YLeaf cmediagwcccfgrtpnameprefix; //type: string
        ydk::YLeaf cmediagwcccfgaal1svcnameprefix; //type: string
        ydk::YLeaf cmediagwcccfgaal2svcnameprefix; //type: string
        ydk::YLeaf cmediagwcccfgclusterenabled; //type: CMediaGwCcCfgClusterEnabled
        ydk::YLeaf cmediagwcccfgdefbearertraffic; //type: CMediaGwCcCfgDefBearerTraffic
        ydk::YLeaf cmediagwcccfgdefrtpnameprefix; //type: string
        class CMediaGwCcCfgClusterEnabled;
        class CMediaGwCcCfgDefBearerTraffic;

}; // CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry


class CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable : public ydk::Entity
{
    public:
        CMediaGwRscStatsTable();
        ~CMediaGwRscStatsTable();

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

        class CMediaGwRscStatsEntry; //type: CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry

        ydk::YList cmediagwrscstatsentry;
        
}; // CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable


class CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry : public ydk::Entity
{
    public:
        CMediaGwRscStatsEntry();
        ~CMediaGwRscStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::CISCO_MEDIA_GATEWAY_MIB::CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::cmgwindex)
        ydk::YLeaf cmgwindex;
        ydk::YLeaf cmgwrscstatsindex; //type: CmgwRscStatsIndex
        ydk::YLeaf cmgwrscmaximumutilization; //type: uint32
        ydk::YLeaf cmgwrscminimumutilization; //type: uint32
        ydk::YLeaf cmgwrscaverageutilization; //type: uint32
        ydk::YLeaf cmgwrscsincelastreset; //type: uint32
        class CmgwRscStatsIndex;

}; // CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry

class CCallControlJitterDelayMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf adaptive;
        static const ydk::Enum::YLeaf fixed;

};

class CGwAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inService;
        static const ydk::Enum::YLeaf forcedOutOfService;
        static const ydk::Enum::YLeaf gracefulOutOfService;

};

class CGwServiceState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf inService;
        static const ydk::Enum::YLeaf forcedOutOfService;
        static const ydk::Enum::YLeaf gracefulOutOfService;

};

class CISCOMEDIAGATEWAYMIB::CMediaGwTable::CMediaGwEntry::CmgwVtMappingMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf titan;

};

class CISCOMEDIAGATEWAYMIB::CmgwSignalProtocolTable::CmgwSignalProtocolEntry::CmgwSignalProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf mgcp;
        static const ydk::Enum::YLeaf h248;
        static const ydk::Enum::YLeaf tgcp;

};

class CISCOMEDIAGATEWAYMIB::CMediaGwDomainNameConfigTable::CMediaGwDomainNameConfigEntry::CmgwConfigDomainNameEntity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gateway;
        static const ydk::Enum::YLeaf dnsServer;
        static const ydk::Enum::YLeaf mgc;

};

class CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::CMediaGwCcCfgClusterEnabled : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf conditionalEnabled;

};

class CISCOMEDIAGATEWAYMIB::CMediaGwCallControlConfigTable::CMediaGwCallControlConfigEntry::CMediaGwCcCfgDefBearerTraffic : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipPvcAal5;
        static const ydk::Enum::YLeaf atmPvcAal2;
        static const ydk::Enum::YLeaf atmSvcAal2;
        static const ydk::Enum::YLeaf atmSvcAal1;

};

class CISCOMEDIAGATEWAYMIB::CMediaGwRscStatsTable::CMediaGwRscStatsEntry::CmgwRscStatsIndex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cpu;
        static const ydk::Enum::YLeaf staticmemory;
        static const ydk::Enum::YLeaf dynamicmemory;
        static const ydk::Enum::YLeaf sysmemory;
        static const ydk::Enum::YLeaf commbuffer;
        static const ydk::Enum::YLeaf msgq;
        static const ydk::Enum::YLeaf atmq;
        static const ydk::Enum::YLeaf svccongestion;
        static const ydk::Enum::YLeaf rsvpq;
        static const ydk::Enum::YLeaf dspq;
        static const ydk::Enum::YLeaf h248congestion;
        static const ydk::Enum::YLeaf callpersec;
        static const ydk::Enum::YLeaf smallipcbuffer;
        static const ydk::Enum::YLeaf mediumipcbuffer;
        static const ydk::Enum::YLeaf largeipcbuffer;
        static const ydk::Enum::YLeaf hugeipcbuffer;
        static const ydk::Enum::YLeaf mblkipcbuffer;

};


}
}

#endif /* _CISCO_MEDIA_GATEWAY_MIB_ */

