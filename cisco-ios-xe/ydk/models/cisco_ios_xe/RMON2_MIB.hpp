#ifndef _RMON2_MIB_
#define _RMON2_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace RMON2_MIB {

class RMON2MIB : public ydk::Entity
{
    public:
        RMON2MIB();
        ~RMON2MIB();

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

        class Protocoldir; //type: RMON2MIB::Protocoldir
        class Addressmap; //type: RMON2MIB::Addressmap
        class Probeconfig; //type: RMON2MIB::Probeconfig
        class Protocoldirtable; //type: RMON2MIB::Protocoldirtable
        class Protocoldistcontroltable; //type: RMON2MIB::Protocoldistcontroltable
        class Protocoldiststatstable; //type: RMON2MIB::Protocoldiststatstable
        class Addressmapcontroltable; //type: RMON2MIB::Addressmapcontroltable
        class Addressmaptable; //type: RMON2MIB::Addressmaptable
        class Hlhostcontroltable; //type: RMON2MIB::Hlhostcontroltable
        class Nlhosttable; //type: RMON2MIB::Nlhosttable
        class Hlmatrixcontroltable; //type: RMON2MIB::Hlmatrixcontroltable
        class Nlmatrixsdtable; //type: RMON2MIB::Nlmatrixsdtable
        class Nlmatrixdstable; //type: RMON2MIB::Nlmatrixdstable
        class Nlmatrixtopncontroltable; //type: RMON2MIB::Nlmatrixtopncontroltable
        class Nlmatrixtopntable; //type: RMON2MIB::Nlmatrixtopntable
        class Alhosttable; //type: RMON2MIB::Alhosttable
        class Almatrixsdtable; //type: RMON2MIB::Almatrixsdtable
        class Almatrixdstable; //type: RMON2MIB::Almatrixdstable
        class Almatrixtopncontroltable; //type: RMON2MIB::Almatrixtopncontroltable
        class Almatrixtopntable; //type: RMON2MIB::Almatrixtopntable
        class Usrhistorycontroltable; //type: RMON2MIB::Usrhistorycontroltable
        class Usrhistoryobjecttable; //type: RMON2MIB::Usrhistoryobjecttable
        class Usrhistorytable; //type: RMON2MIB::Usrhistorytable
        class Serialconfigtable; //type: RMON2MIB::Serialconfigtable
        class Netconfigtable; //type: RMON2MIB::Netconfigtable
        class Trapdesttable; //type: RMON2MIB::Trapdesttable
        class Serialconnectiontable; //type: RMON2MIB::Serialconnectiontable

        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldir> protocoldir;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Addressmap> addressmap;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Probeconfig> probeconfig;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable> protocoldirtable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldistcontroltable> protocoldistcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldiststatstable> protocoldiststatstable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Addressmapcontroltable> addressmapcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Addressmaptable> addressmaptable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Hlhostcontroltable> hlhostcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlhosttable> nlhosttable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Hlmatrixcontroltable> hlmatrixcontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixsdtable> nlmatrixsdtable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixdstable> nlmatrixdstable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixtopncontroltable> nlmatrixtopncontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixtopntable> nlmatrixtopntable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Alhosttable> alhosttable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Almatrixsdtable> almatrixsdtable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Almatrixdstable> almatrixdstable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Almatrixtopncontroltable> almatrixtopncontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Almatrixtopntable> almatrixtopntable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Usrhistorycontroltable> usrhistorycontroltable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Usrhistoryobjecttable> usrhistoryobjecttable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Usrhistorytable> usrhistorytable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Serialconfigtable> serialconfigtable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Netconfigtable> netconfigtable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Trapdesttable> trapdesttable;
        std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Serialconnectiontable> serialconnectiontable;
        
}; // RMON2MIB


class RMON2MIB::Protocoldir : public ydk::Entity
{
    public:
        Protocoldir();
        ~Protocoldir();

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

        ydk::YLeaf protocoldirlastchange; //type: uint32

}; // RMON2MIB::Protocoldir


class RMON2MIB::Addressmap : public ydk::Entity
{
    public:
        Addressmap();
        ~Addressmap();

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

        ydk::YLeaf addressmapinserts; //type: uint32
        ydk::YLeaf addressmapdeletes; //type: uint32
        ydk::YLeaf addressmapmaxdesiredentries; //type: int32

}; // RMON2MIB::Addressmap


class RMON2MIB::Probeconfig : public ydk::Entity
{
    public:
        Probeconfig();
        ~Probeconfig();

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

        ydk::YLeaf probecapabilities; //type: binary
        ydk::YLeaf probesoftwarerev; //type: string
        ydk::YLeaf probehardwarerev; //type: string
        ydk::YLeaf probedatetime; //type: binary
        ydk::YLeaf proberesetcontrol; //type: Proberesetcontrol
        ydk::YLeaf probedownloadfile; //type: string
        ydk::YLeaf probedownloadtftpserver; //type: string
        ydk::YLeaf probedownloadaction; //type: Probedownloadaction
        ydk::YLeaf probedownloadstatus; //type: Probedownloadstatus
        ydk::YLeaf netdefaultgateway; //type: string
        class Proberesetcontrol;
        class Probedownloadaction;
        class Probedownloadstatus;

}; // RMON2MIB::Probeconfig


class RMON2MIB::Protocoldirtable : public ydk::Entity
{
    public:
        Protocoldirtable();
        ~Protocoldirtable();

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

        class Protocoldirentry; //type: RMON2MIB::Protocoldirtable::Protocoldirentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry> > protocoldirentry;
        
}; // RMON2MIB::Protocoldirtable


class RMON2MIB::Protocoldirtable::Protocoldirentry : public ydk::Entity
{
    public:
        Protocoldirentry();
        ~Protocoldirentry();

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

        ydk::YLeaf protocoldirid; //type: binary
        ydk::YLeaf protocoldirparameters; //type: binary
        ydk::YLeaf protocoldirlocalindex; //type: int32
        ydk::YLeaf protocoldirdescr; //type: string
        ydk::YLeaf protocoldirtype; //type: binary
        ydk::YLeaf protocoldiraddressmapconfig; //type: Protocoldiraddressmapconfig
        ydk::YLeaf protocoldirhostconfig; //type: Protocoldirhostconfig
        ydk::YLeaf protocoldirmatrixconfig; //type: Protocoldirmatrixconfig
        ydk::YLeaf protocoldirowner; //type: binary
        ydk::YLeaf protocoldirstatus; //type: RowStatus
        class Protocoldiraddressmapconfig;
        class Protocoldirhostconfig;
        class Protocoldirmatrixconfig;

}; // RMON2MIB::Protocoldirtable::Protocoldirentry


class RMON2MIB::Protocoldistcontroltable : public ydk::Entity
{
    public:
        Protocoldistcontroltable();
        ~Protocoldistcontroltable();

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

        class Protocoldistcontrolentry; //type: RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry> > protocoldistcontrolentry;
        
}; // RMON2MIB::Protocoldistcontroltable


class RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry : public ydk::Entity
{
    public:
        Protocoldistcontrolentry();
        ~Protocoldistcontrolentry();

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

        ydk::YLeaf protocoldistcontrolindex; //type: int32
        ydk::YLeaf protocoldistcontroldatasource; //type: string
        ydk::YLeaf protocoldistcontroldroppedframes; //type: uint32
        ydk::YLeaf protocoldistcontrolcreatetime; //type: uint32
        ydk::YLeaf protocoldistcontrolowner; //type: binary
        ydk::YLeaf protocoldistcontrolstatus; //type: RowStatus

}; // RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry


class RMON2MIB::Protocoldiststatstable : public ydk::Entity
{
    public:
        Protocoldiststatstable();
        ~Protocoldiststatstable();

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

        class Protocoldiststatsentry; //type: RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry> > protocoldiststatsentry;
        
}; // RMON2MIB::Protocoldiststatstable


class RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry : public ydk::Entity
{
    public:
        Protocoldiststatsentry();
        ~Protocoldiststatsentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldistcontroltable::Protocoldistcontrolentry::protocoldistcontrolindex)
        ydk::YLeaf protocoldistcontrolindex;
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf protocoldiststatspkts; //type: uint32
        ydk::YLeaf protocoldiststatsoctets; //type: uint32

}; // RMON2MIB::Protocoldiststatstable::Protocoldiststatsentry


class RMON2MIB::Addressmapcontroltable : public ydk::Entity
{
    public:
        Addressmapcontroltable();
        ~Addressmapcontroltable();

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

        class Addressmapcontrolentry; //type: RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry> > addressmapcontrolentry;
        
}; // RMON2MIB::Addressmapcontroltable


class RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry : public ydk::Entity
{
    public:
        Addressmapcontrolentry();
        ~Addressmapcontrolentry();

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

        ydk::YLeaf addressmapcontrolindex; //type: int32
        ydk::YLeaf addressmapcontroldatasource; //type: string
        ydk::YLeaf addressmapcontroldroppedframes; //type: uint32
        ydk::YLeaf addressmapcontrolowner; //type: binary
        ydk::YLeaf addressmapcontrolstatus; //type: RowStatus

}; // RMON2MIB::Addressmapcontroltable::Addressmapcontrolentry


class RMON2MIB::Addressmaptable : public ydk::Entity
{
    public:
        Addressmaptable();
        ~Addressmaptable();

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

        class Addressmapentry; //type: RMON2MIB::Addressmaptable::Addressmapentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Addressmaptable::Addressmapentry> > addressmapentry;
        
}; // RMON2MIB::Addressmaptable


class RMON2MIB::Addressmaptable::Addressmapentry : public ydk::Entity
{
    public:
        Addressmapentry();
        ~Addressmapentry();

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

        ydk::YLeaf addressmaptimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf addressmapnetworkaddress; //type: binary
        ydk::YLeaf addressmapsource; //type: string
        ydk::YLeaf addressmapphysicaladdress; //type: binary
        ydk::YLeaf addressmaplastchange; //type: uint32

}; // RMON2MIB::Addressmaptable::Addressmapentry


class RMON2MIB::Hlhostcontroltable : public ydk::Entity
{
    public:
        Hlhostcontroltable();
        ~Hlhostcontroltable();

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

        class Hlhostcontrolentry; //type: RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry> > hlhostcontrolentry;
        
}; // RMON2MIB::Hlhostcontroltable


class RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry : public ydk::Entity
{
    public:
        Hlhostcontrolentry();
        ~Hlhostcontrolentry();

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

        ydk::YLeaf hlhostcontrolindex; //type: int32
        ydk::YLeaf hlhostcontroldatasource; //type: string
        ydk::YLeaf hlhostcontrolnldroppedframes; //type: uint32
        ydk::YLeaf hlhostcontrolnlinserts; //type: uint32
        ydk::YLeaf hlhostcontrolnldeletes; //type: uint32
        ydk::YLeaf hlhostcontrolnlmaxdesiredentries; //type: int32
        ydk::YLeaf hlhostcontrolaldroppedframes; //type: uint32
        ydk::YLeaf hlhostcontrolalinserts; //type: uint32
        ydk::YLeaf hlhostcontrolaldeletes; //type: uint32
        ydk::YLeaf hlhostcontrolalmaxdesiredentries; //type: int32
        ydk::YLeaf hlhostcontrolowner; //type: binary
        ydk::YLeaf hlhostcontrolstatus; //type: RowStatus

}; // RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry


class RMON2MIB::Nlhosttable : public ydk::Entity
{
    public:
        Nlhosttable();
        ~Nlhosttable();

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

        class Nlhostentry; //type: RMON2MIB::Nlhosttable::Nlhostentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlhosttable::Nlhostentry> > nlhostentry;
        
}; // RMON2MIB::Nlhosttable


class RMON2MIB::Nlhosttable::Nlhostentry : public ydk::Entity
{
    public:
        Nlhostentry();
        ~Nlhostentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::hlhostcontrolindex)
        ydk::YLeaf hlhostcontrolindex;
        ydk::YLeaf nlhosttimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf nlhostaddress; //type: binary
        ydk::YLeaf nlhostinpkts; //type: uint32
        ydk::YLeaf nlhostoutpkts; //type: uint32
        ydk::YLeaf nlhostinoctets; //type: uint32
        ydk::YLeaf nlhostoutoctets; //type: uint32
        ydk::YLeaf nlhostoutmacnonunicastpkts; //type: uint32
        ydk::YLeaf nlhostcreatetime; //type: uint32

}; // RMON2MIB::Nlhosttable::Nlhostentry


class RMON2MIB::Hlmatrixcontroltable : public ydk::Entity
{
    public:
        Hlmatrixcontroltable();
        ~Hlmatrixcontroltable();

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

        class Hlmatrixcontrolentry; //type: RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry> > hlmatrixcontrolentry;
        
}; // RMON2MIB::Hlmatrixcontroltable


class RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry : public ydk::Entity
{
    public:
        Hlmatrixcontrolentry();
        ~Hlmatrixcontrolentry();

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

        ydk::YLeaf hlmatrixcontrolindex; //type: int32
        ydk::YLeaf hlmatrixcontroldatasource; //type: string
        ydk::YLeaf hlmatrixcontrolnldroppedframes; //type: uint32
        ydk::YLeaf hlmatrixcontrolnlinserts; //type: uint32
        ydk::YLeaf hlmatrixcontrolnldeletes; //type: uint32
        ydk::YLeaf hlmatrixcontrolnlmaxdesiredentries; //type: int32
        ydk::YLeaf hlmatrixcontrolaldroppedframes; //type: uint32
        ydk::YLeaf hlmatrixcontrolalinserts; //type: uint32
        ydk::YLeaf hlmatrixcontrolaldeletes; //type: uint32
        ydk::YLeaf hlmatrixcontrolalmaxdesiredentries; //type: int32
        ydk::YLeaf hlmatrixcontrolowner; //type: binary
        ydk::YLeaf hlmatrixcontrolstatus; //type: RowStatus

}; // RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry


class RMON2MIB::Nlmatrixsdtable : public ydk::Entity
{
    public:
        Nlmatrixsdtable();
        ~Nlmatrixsdtable();

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

        class Nlmatrixsdentry; //type: RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry> > nlmatrixsdentry;
        
}; // RMON2MIB::Nlmatrixsdtable


class RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry : public ydk::Entity
{
    public:
        Nlmatrixsdentry();
        ~Nlmatrixsdentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf nlmatrixsdtimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf nlmatrixsdsourceaddress; //type: binary
        ydk::YLeaf nlmatrixsddestaddress; //type: binary
        ydk::YLeaf nlmatrixsdpkts; //type: uint32
        ydk::YLeaf nlmatrixsdoctets; //type: uint32
        ydk::YLeaf nlmatrixsdcreatetime; //type: uint32

}; // RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry


class RMON2MIB::Nlmatrixdstable : public ydk::Entity
{
    public:
        Nlmatrixdstable();
        ~Nlmatrixdstable();

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

        class Nlmatrixdsentry; //type: RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry> > nlmatrixdsentry;
        
}; // RMON2MIB::Nlmatrixdstable


class RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry : public ydk::Entity
{
    public:
        Nlmatrixdsentry();
        ~Nlmatrixdsentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf nlmatrixdstimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        ydk::YLeaf nlmatrixdsdestaddress; //type: binary
        ydk::YLeaf nlmatrixdssourceaddress; //type: binary
        ydk::YLeaf nlmatrixdspkts; //type: uint32
        ydk::YLeaf nlmatrixdsoctets; //type: uint32
        ydk::YLeaf nlmatrixdscreatetime; //type: uint32

}; // RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry


class RMON2MIB::Nlmatrixtopncontroltable : public ydk::Entity
{
    public:
        Nlmatrixtopncontroltable();
        ~Nlmatrixtopncontroltable();

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

        class Nlmatrixtopncontrolentry; //type: RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry> > nlmatrixtopncontrolentry;
        
}; // RMON2MIB::Nlmatrixtopncontroltable


class RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry : public ydk::Entity
{
    public:
        Nlmatrixtopncontrolentry();
        ~Nlmatrixtopncontrolentry();

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

        ydk::YLeaf nlmatrixtopncontrolindex; //type: int32
        ydk::YLeaf nlmatrixtopncontrolmatrixindex; //type: int32
        ydk::YLeaf nlmatrixtopncontrolratebase; //type: Nlmatrixtopncontrolratebase
        ydk::YLeaf nlmatrixtopncontroltimeremaining; //type: int32
        ydk::YLeaf nlmatrixtopncontrolgeneratedreports; //type: uint32
        ydk::YLeaf nlmatrixtopncontrolduration; //type: int32
        ydk::YLeaf nlmatrixtopncontrolrequestedsize; //type: int32
        ydk::YLeaf nlmatrixtopncontrolgrantedsize; //type: int32
        ydk::YLeaf nlmatrixtopncontrolstarttime; //type: uint32
        ydk::YLeaf nlmatrixtopncontrolowner; //type: binary
        ydk::YLeaf nlmatrixtopncontrolstatus; //type: RowStatus
        class Nlmatrixtopncontrolratebase;

}; // RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry


class RMON2MIB::Nlmatrixtopntable : public ydk::Entity
{
    public:
        Nlmatrixtopntable();
        ~Nlmatrixtopntable();

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

        class Nlmatrixtopnentry; //type: RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry> > nlmatrixtopnentry;
        
}; // RMON2MIB::Nlmatrixtopntable


class RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry : public ydk::Entity
{
    public:
        Nlmatrixtopnentry();
        ~Nlmatrixtopnentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::nlmatrixtopncontrolindex)
        ydk::YLeaf nlmatrixtopncontrolindex;
        ydk::YLeaf nlmatrixtopnindex; //type: int32
        ydk::YLeaf nlmatrixtopnprotocoldirlocalindex; //type: int32
        ydk::YLeaf nlmatrixtopnsourceaddress; //type: binary
        ydk::YLeaf nlmatrixtopndestaddress; //type: binary
        ydk::YLeaf nlmatrixtopnpktrate; //type: uint32
        ydk::YLeaf nlmatrixtopnreversepktrate; //type: uint32
        ydk::YLeaf nlmatrixtopnoctetrate; //type: uint32
        ydk::YLeaf nlmatrixtopnreverseoctetrate; //type: uint32

}; // RMON2MIB::Nlmatrixtopntable::Nlmatrixtopnentry


class RMON2MIB::Alhosttable : public ydk::Entity
{
    public:
        Alhosttable();
        ~Alhosttable();

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

        class Alhostentry; //type: RMON2MIB::Alhosttable::Alhostentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Alhosttable::Alhostentry> > alhostentry;
        
}; // RMON2MIB::Alhosttable


class RMON2MIB::Alhosttable::Alhostentry : public ydk::Entity
{
    public:
        Alhostentry();
        ~Alhostentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Hlhostcontroltable::Hlhostcontrolentry::hlhostcontrolindex)
        ydk::YLeaf hlhostcontrolindex;
        ydk::YLeaf alhosttimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        //type: binary (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlhosttable::Nlhostentry::nlhostaddress)
        ydk::YLeaf nlhostaddress;
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex_2;
        ydk::YLeaf alhostinpkts; //type: uint32
        ydk::YLeaf alhostoutpkts; //type: uint32
        ydk::YLeaf alhostinoctets; //type: uint32
        ydk::YLeaf alhostoutoctets; //type: uint32
        ydk::YLeaf alhostcreatetime; //type: uint32

}; // RMON2MIB::Alhosttable::Alhostentry


class RMON2MIB::Almatrixsdtable : public ydk::Entity
{
    public:
        Almatrixsdtable();
        ~Almatrixsdtable();

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

        class Almatrixsdentry; //type: RMON2MIB::Almatrixsdtable::Almatrixsdentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Almatrixsdtable::Almatrixsdentry> > almatrixsdentry;
        
}; // RMON2MIB::Almatrixsdtable


class RMON2MIB::Almatrixsdtable::Almatrixsdentry : public ydk::Entity
{
    public:
        Almatrixsdentry();
        ~Almatrixsdentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf almatrixsdtimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        //type: binary (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::nlmatrixsdsourceaddress)
        ydk::YLeaf nlmatrixsdsourceaddress;
        //type: binary (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixsdtable::Nlmatrixsdentry::nlmatrixsddestaddress)
        ydk::YLeaf nlmatrixsddestaddress;
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex_2;
        ydk::YLeaf almatrixsdpkts; //type: uint32
        ydk::YLeaf almatrixsdoctets; //type: uint32
        ydk::YLeaf almatrixsdcreatetime; //type: uint32

}; // RMON2MIB::Almatrixsdtable::Almatrixsdentry


class RMON2MIB::Almatrixdstable : public ydk::Entity
{
    public:
        Almatrixdstable();
        ~Almatrixdstable();

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

        class Almatrixdsentry; //type: RMON2MIB::Almatrixdstable::Almatrixdsentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Almatrixdstable::Almatrixdsentry> > almatrixdsentry;
        
}; // RMON2MIB::Almatrixdstable


class RMON2MIB::Almatrixdstable::Almatrixdsentry : public ydk::Entity
{
    public:
        Almatrixdsentry();
        ~Almatrixdsentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Hlmatrixcontroltable::Hlmatrixcontrolentry::hlmatrixcontrolindex)
        ydk::YLeaf hlmatrixcontrolindex;
        ydk::YLeaf almatrixdstimemark; //type: uint32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex;
        //type: binary (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::nlmatrixdsdestaddress)
        ydk::YLeaf nlmatrixdsdestaddress;
        //type: binary (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Nlmatrixdstable::Nlmatrixdsentry::nlmatrixdssourceaddress)
        ydk::YLeaf nlmatrixdssourceaddress;
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Protocoldirtable::Protocoldirentry::protocoldirlocalindex)
        ydk::YLeaf protocoldirlocalindex_2;
        ydk::YLeaf almatrixdspkts; //type: uint32
        ydk::YLeaf almatrixdsoctets; //type: uint32
        ydk::YLeaf almatrixdscreatetime; //type: uint32

}; // RMON2MIB::Almatrixdstable::Almatrixdsentry


class RMON2MIB::Almatrixtopncontroltable : public ydk::Entity
{
    public:
        Almatrixtopncontroltable();
        ~Almatrixtopncontroltable();

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

        class Almatrixtopncontrolentry; //type: RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry> > almatrixtopncontrolentry;
        
}; // RMON2MIB::Almatrixtopncontroltable


class RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry : public ydk::Entity
{
    public:
        Almatrixtopncontrolentry();
        ~Almatrixtopncontrolentry();

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

        ydk::YLeaf almatrixtopncontrolindex; //type: int32
        ydk::YLeaf almatrixtopncontrolmatrixindex; //type: int32
        ydk::YLeaf almatrixtopncontrolratebase; //type: Almatrixtopncontrolratebase
        ydk::YLeaf almatrixtopncontroltimeremaining; //type: int32
        ydk::YLeaf almatrixtopncontrolgeneratedreports; //type: uint32
        ydk::YLeaf almatrixtopncontrolduration; //type: int32
        ydk::YLeaf almatrixtopncontrolrequestedsize; //type: int32
        ydk::YLeaf almatrixtopncontrolgrantedsize; //type: int32
        ydk::YLeaf almatrixtopncontrolstarttime; //type: uint32
        ydk::YLeaf almatrixtopncontrolowner; //type: binary
        ydk::YLeaf almatrixtopncontrolstatus; //type: RowStatus
        class Almatrixtopncontrolratebase;

}; // RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry


class RMON2MIB::Almatrixtopntable : public ydk::Entity
{
    public:
        Almatrixtopntable();
        ~Almatrixtopntable();

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

        class Almatrixtopnentry; //type: RMON2MIB::Almatrixtopntable::Almatrixtopnentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Almatrixtopntable::Almatrixtopnentry> > almatrixtopnentry;
        
}; // RMON2MIB::Almatrixtopntable


class RMON2MIB::Almatrixtopntable::Almatrixtopnentry : public ydk::Entity
{
    public:
        Almatrixtopnentry();
        ~Almatrixtopnentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::almatrixtopncontrolindex)
        ydk::YLeaf almatrixtopncontrolindex;
        ydk::YLeaf almatrixtopnindex; //type: int32
        ydk::YLeaf almatrixtopnprotocoldirlocalindex; //type: int32
        ydk::YLeaf almatrixtopnsourceaddress; //type: binary
        ydk::YLeaf almatrixtopndestaddress; //type: binary
        ydk::YLeaf almatrixtopnappprotocoldirlocalindex; //type: int32
        ydk::YLeaf almatrixtopnpktrate; //type: uint32
        ydk::YLeaf almatrixtopnreversepktrate; //type: uint32
        ydk::YLeaf almatrixtopnoctetrate; //type: uint32
        ydk::YLeaf almatrixtopnreverseoctetrate; //type: uint32

}; // RMON2MIB::Almatrixtopntable::Almatrixtopnentry


class RMON2MIB::Usrhistorycontroltable : public ydk::Entity
{
    public:
        Usrhistorycontroltable();
        ~Usrhistorycontroltable();

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

        class Usrhistorycontrolentry; //type: RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry> > usrhistorycontrolentry;
        
}; // RMON2MIB::Usrhistorycontroltable


class RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry : public ydk::Entity
{
    public:
        Usrhistorycontrolentry();
        ~Usrhistorycontrolentry();

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

        ydk::YLeaf usrhistorycontrolindex; //type: int32
        ydk::YLeaf usrhistorycontrolobjects; //type: int32
        ydk::YLeaf usrhistorycontrolbucketsrequested; //type: int32
        ydk::YLeaf usrhistorycontrolbucketsgranted; //type: int32
        ydk::YLeaf usrhistorycontrolinterval; //type: int32
        ydk::YLeaf usrhistorycontrolowner; //type: binary
        ydk::YLeaf usrhistorycontrolstatus; //type: RowStatus

}; // RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry


class RMON2MIB::Usrhistoryobjecttable : public ydk::Entity
{
    public:
        Usrhistoryobjecttable();
        ~Usrhistoryobjecttable();

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

        class Usrhistoryobjectentry; //type: RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry> > usrhistoryobjectentry;
        
}; // RMON2MIB::Usrhistoryobjecttable


class RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry : public ydk::Entity
{
    public:
        Usrhistoryobjectentry();
        ~Usrhistoryobjectentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::usrhistorycontrolindex)
        ydk::YLeaf usrhistorycontrolindex;
        ydk::YLeaf usrhistoryobjectindex; //type: int32
        ydk::YLeaf usrhistoryobjectvariable; //type: string
        ydk::YLeaf usrhistoryobjectsampletype; //type: Usrhistoryobjectsampletype
        class Usrhistoryobjectsampletype;

}; // RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry


class RMON2MIB::Usrhistorytable : public ydk::Entity
{
    public:
        Usrhistorytable();
        ~Usrhistorytable();

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

        class Usrhistoryentry; //type: RMON2MIB::Usrhistorytable::Usrhistoryentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Usrhistorytable::Usrhistoryentry> > usrhistoryentry;
        
}; // RMON2MIB::Usrhistorytable


class RMON2MIB::Usrhistorytable::Usrhistoryentry : public ydk::Entity
{
    public:
        Usrhistoryentry();
        ~Usrhistoryentry();

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

        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Usrhistorycontroltable::Usrhistorycontrolentry::usrhistorycontrolindex)
        ydk::YLeaf usrhistorycontrolindex;
        ydk::YLeaf usrhistorysampleindex; //type: int32
        //type: int32 (refers to cisco_ios_xe::RMON2_MIB::RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::usrhistoryobjectindex)
        ydk::YLeaf usrhistoryobjectindex;
        ydk::YLeaf usrhistoryintervalstart; //type: uint32
        ydk::YLeaf usrhistoryintervalend; //type: uint32
        ydk::YLeaf usrhistoryabsvalue; //type: uint32
        ydk::YLeaf usrhistoryvalstatus; //type: Usrhistoryvalstatus
        class Usrhistoryvalstatus;

}; // RMON2MIB::Usrhistorytable::Usrhistoryentry


class RMON2MIB::Serialconfigtable : public ydk::Entity
{
    public:
        Serialconfigtable();
        ~Serialconfigtable();

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

        class Serialconfigentry; //type: RMON2MIB::Serialconfigtable::Serialconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Serialconfigtable::Serialconfigentry> > serialconfigentry;
        
}; // RMON2MIB::Serialconfigtable


class RMON2MIB::Serialconfigtable::Serialconfigentry : public ydk::Entity
{
    public:
        Serialconfigentry();
        ~Serialconfigentry();

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

        //type: int32 (refers to cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf serialmode; //type: Serialmode
        ydk::YLeaf serialprotocol; //type: Serialprotocol
        ydk::YLeaf serialtimeout; //type: int32
        ydk::YLeaf serialmodeminitstring; //type: string
        ydk::YLeaf serialmodemhangupstring; //type: string
        ydk::YLeaf serialmodemconnectresp; //type: string
        ydk::YLeaf serialmodemnoconnectresp; //type: string
        ydk::YLeaf serialdialouttimeout; //type: int32
        ydk::YLeaf serialstatus; //type: RowStatus
        class Serialmode;
        class Serialprotocol;

}; // RMON2MIB::Serialconfigtable::Serialconfigentry


class RMON2MIB::Netconfigtable : public ydk::Entity
{
    public:
        Netconfigtable();
        ~Netconfigtable();

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

        class Netconfigentry; //type: RMON2MIB::Netconfigtable::Netconfigentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Netconfigtable::Netconfigentry> > netconfigentry;
        
}; // RMON2MIB::Netconfigtable


class RMON2MIB::Netconfigtable::Netconfigentry : public ydk::Entity
{
    public:
        Netconfigentry();
        ~Netconfigentry();

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

        //type: int32 (refers to cisco_ios_xe::RFC1213_MIB::RFC1213MIB::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf netconfigipaddress; //type: string
        ydk::YLeaf netconfigsubnetmask; //type: string
        ydk::YLeaf netconfigstatus; //type: RowStatus

}; // RMON2MIB::Netconfigtable::Netconfigentry


class RMON2MIB::Trapdesttable : public ydk::Entity
{
    public:
        Trapdesttable();
        ~Trapdesttable();

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

        class Trapdestentry; //type: RMON2MIB::Trapdesttable::Trapdestentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Trapdesttable::Trapdestentry> > trapdestentry;
        
}; // RMON2MIB::Trapdesttable


class RMON2MIB::Trapdesttable::Trapdestentry : public ydk::Entity
{
    public:
        Trapdestentry();
        ~Trapdestentry();

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

        ydk::YLeaf trapdestindex; //type: int32
        ydk::YLeaf trapdestcommunity; //type: binary
        ydk::YLeaf trapdestprotocol; //type: Trapdestprotocol
        ydk::YLeaf trapdestaddress; //type: binary
        ydk::YLeaf trapdestowner; //type: binary
        ydk::YLeaf trapdeststatus; //type: RowStatus
        class Trapdestprotocol;

}; // RMON2MIB::Trapdesttable::Trapdestentry


class RMON2MIB::Serialconnectiontable : public ydk::Entity
{
    public:
        Serialconnectiontable();
        ~Serialconnectiontable();

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

        class Serialconnectionentry; //type: RMON2MIB::Serialconnectiontable::Serialconnectionentry

        std::vector<std::shared_ptr<cisco_ios_xe::RMON2_MIB::RMON2MIB::Serialconnectiontable::Serialconnectionentry> > serialconnectionentry;
        
}; // RMON2MIB::Serialconnectiontable


class RMON2MIB::Serialconnectiontable::Serialconnectionentry : public ydk::Entity
{
    public:
        Serialconnectionentry();
        ~Serialconnectionentry();

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

        ydk::YLeaf serialconnectindex; //type: int32
        ydk::YLeaf serialconnectdestipaddress; //type: string
        ydk::YLeaf serialconnecttype; //type: Serialconnecttype
        ydk::YLeaf serialconnectdialstring; //type: string
        ydk::YLeaf serialconnectswitchconnectseq; //type: string
        ydk::YLeaf serialconnectswitchdisconnectseq; //type: string
        ydk::YLeaf serialconnectswitchresetseq; //type: string
        ydk::YLeaf serialconnectowner; //type: binary
        ydk::YLeaf serialconnectstatus; //type: RowStatus
        class Serialconnecttype;

}; // RMON2MIB::Serialconnectiontable::Serialconnectionentry

class RMON2MIB::Probeconfig::Proberesetcontrol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf running;
        static const ydk::Enum::YLeaf warmBoot;
        static const ydk::Enum::YLeaf coldBoot;

};

class RMON2MIB::Probeconfig::Probedownloadaction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notDownloading;
        static const ydk::Enum::YLeaf downloadToPROM;
        static const ydk::Enum::YLeaf downloadToRAM;

};

class RMON2MIB::Probeconfig::Probedownloadstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downloadSuccess;
        static const ydk::Enum::YLeaf downloadStatusUnknown;
        static const ydk::Enum::YLeaf downloadGeneralError;
        static const ydk::Enum::YLeaf downloadNoResponseFromServer;
        static const ydk::Enum::YLeaf downloadChecksumError;
        static const ydk::Enum::YLeaf downloadIncompatibleImage;
        static const ydk::Enum::YLeaf downloadTftpFileNotFound;
        static const ydk::Enum::YLeaf downloadTftpAccessViolation;

};

class RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldiraddressmapconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notSupported;
        static const ydk::Enum::YLeaf supportedOff;
        static const ydk::Enum::YLeaf supportedOn;

};

class RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldirhostconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notSupported;
        static const ydk::Enum::YLeaf supportedOff;
        static const ydk::Enum::YLeaf supportedOn;

};

class RMON2MIB::Protocoldirtable::Protocoldirentry::Protocoldirmatrixconfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notSupported;
        static const ydk::Enum::YLeaf supportedOff;
        static const ydk::Enum::YLeaf supportedOn;

};

class RMON2MIB::Nlmatrixtopncontroltable::Nlmatrixtopncontrolentry::Nlmatrixtopncontrolratebase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nlMatrixTopNPkts;
        static const ydk::Enum::YLeaf nlMatrixTopNOctets;

};

class RMON2MIB::Almatrixtopncontroltable::Almatrixtopncontrolentry::Almatrixtopncontrolratebase : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf alMatrixTopNTerminalsPkts;
        static const ydk::Enum::YLeaf alMatrixTopNTerminalsOctets;
        static const ydk::Enum::YLeaf alMatrixTopNAllPkts;
        static const ydk::Enum::YLeaf alMatrixTopNAllOctets;

};

class RMON2MIB::Usrhistoryobjecttable::Usrhistoryobjectentry::Usrhistoryobjectsampletype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absoluteValue;
        static const ydk::Enum::YLeaf deltaValue;

};

class RMON2MIB::Usrhistorytable::Usrhistoryentry::Usrhistoryvalstatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf valueNotAvailable;
        static const ydk::Enum::YLeaf valuePositive;
        static const ydk::Enum::YLeaf valueNegative;

};

class RMON2MIB::Serialconfigtable::Serialconfigentry::Serialmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf modem;

};

class RMON2MIB::Serialconfigtable::Serialconfigentry::Serialprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf slip;
        static const ydk::Enum::YLeaf ppp;

};

class RMON2MIB::Trapdesttable::Trapdestentry::Trapdestprotocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf ipx;

};

class RMON2MIB::Serialconnectiontable::Serialconnectionentry::Serialconnecttype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf direct;
        static const ydk::Enum::YLeaf modem;
        static const ydk::Enum::YLeaf switch_;
        static const ydk::Enum::YLeaf modemSwitch;

};


}
}

#endif /* _RMON2_MIB_ */

