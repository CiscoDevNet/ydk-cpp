#ifndef _CISCO_NX_OS_DEVICE_17_
#define _CISCO_NX_OS_DEVICE_17_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_NX_OS_device_0.hpp"
#include "Cisco_NX_OS_device_16.hpp"

namespace cisco_nx_os {
namespace Cisco_NX_OS_device {


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::ComplexItems::ComplexList::TextItems::TextList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::TextItems::TextList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::IpItems::IpList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::MacItems::MacList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::UbyteItems::UByteList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems : public ydk::Entity
{
    public:
        RspseudoIfItems();
        ~RspseudoIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RsPseudoIfList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList

        ydk::YList rspseudoif_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList : public ydk::Entity
{
    public:
        RsPseudoIfList();
        ~RsPseudoIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RspseudoIfItems::RsPseudoIfList


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtvrfMbrItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems


class System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::ClientifItems::ClientIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::DhcpItems::InstItems::RelayifItems : public ydk::Entity
{
    public:
        RelayifItems();
        ~RelayifItems();

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

        class RelayIfList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList

        ydk::YList relayif_list;
        
}; // System::DhcpItems::InstItems::RelayifItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList : public ydk::Entity
{
    public:
        RelayIfList();
        ~RelayIfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf options; //type: string
        ydk::YLeaf smartrelayenabled; //type: boolean
        ydk::YLeaf subnetbroadcastenabled; //type: boolean
        ydk::YLeaf informationtrustedenabled; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class OptItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems
        class AddrItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems
        class Addrv6Items; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items
        class SrcifItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems
        class V6srcifItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems
        class MsgstatsItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems
        class StatItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems
        class ComplexItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems
        class TextItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems
        class IpItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems
        class RtvrfMbrItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems> opt_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems> addr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items> addrv6_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems> srcif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems> v6srcif_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems> msgstats_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems> stat_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems> complex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems> text_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems : public ydk::Entity
{
    public:
        OptItems();
        ~OptItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OptionDefList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList

        ydk::YList optiondef_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList : public ydk::Entity
{
    public:
        OptionDefList();
        ~OptionDefList();

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
        ydk::YLeaf id; //type: uint8
        ydk::YLeaf data; //type: string
        class BdItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems> bd_items;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems : public ydk::Entity
{
    public:
        BdItems();
        ~BdItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DiscNodeList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList

        ydk::YList discnode_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList : public ydk::Entity
{
    public:
        DiscNodeList();
        ~DiscNodeList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encap; //type: string
        ydk::YLeaf mac; //type: string
        ydk::YLeaf ciaddr; //type: string
        ydk::YLeaf siaddr; //type: string
        ydk::YLeaf ifid; //type: string
        ydk::YLeaf ctxencap; //type: string
        ydk::YLeaf fabencap; //type: string
        ydk::YLeaf notifst; //type: DhcpNotifStatus

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::OptItems::OptionDefList::BdItems::DiscNodeList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems : public ydk::Entity
{
    public:
        AddrItems();
        ~AddrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RelayAddrList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList

        ydk::YList relayaddr_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList : public ydk::Entity
{
    public:
        RelayAddrList();
        ~RelayAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf gw; //type: string
        ydk::YLeaf mode; //type: DhcpRelayVisibility
        ydk::YLeaf counter; //type: uint16
        class GwItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems
        class StatisticsItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems> gw_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems> statistics_items;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems : public ydk::Entity
{
    public:
        GwItems();
        ~GwItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RelayGwList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList

        ydk::YList relaygw_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList : public ydk::Entity
{
    public:
        RelayGwList();
        ~RelayGwList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::GwItems::RelayGwList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems : public ydk::Entity
{
    public:
        StatisticsItems();
        ~StatisticsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reqpktsent; //type: uint32
        ydk::YLeaf resppktrcvd; //type: uint32

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::AddrItems::RelayAddrList::StatisticsItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items : public ydk::Entity
{
    public:
        Addrv6Items();
        ~Addrv6Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class V6RelayAddrList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList

        ydk::YList v6relayaddr_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList : public ydk::Entity
{
    public:
        V6RelayAddrList();
        ~V6RelayAddrList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf dstif; //type: string
        ydk::YLeaf mode; //type: DhcpRelayVisibility
        ydk::YLeaf counter; //type: uint16
        class GwItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems> gw_items;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems : public ydk::Entity
{
    public:
        GwItems();
        ~GwItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class V6RelayGwList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList

        ydk::YList v6relaygw_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList : public ydk::Entity
{
    public:
        V6RelayGwList();
        ~V6RelayGwList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::Addrv6Items::V6RelayAddrList::GwItems::V6RelayGwList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems : public ydk::Entity
{
    public:
        SrcifItems();
        ~SrcifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sourceinterface; //type: string

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::SrcifItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems : public ydk::Entity
{
    public:
        V6srcifItems();
        ~V6srcifItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf v6sourceinterface; //type: string

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::V6srcifItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems : public ydk::Entity
{
    public:
        MsgstatsItems();
        ~MsgstatsItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MsgStatsList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList

        ydk::YList msgstats_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList : public ydk::Entity
{
    public:
        MsgStatsList();
        ~MsgStatsList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: DhcpMsgT
        ydk::YLeaf pktrcvd; //type: uint32
        ydk::YLeaf pktsent; //type: uint32
        ydk::YLeaf pktdrop; //type: uint32

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::MsgstatsItems::MsgStatsList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems : public ydk::Entity
{
    public:
        StatItems();
        ~StatItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf invalidmsgtypedrop; //type: uint32
        ydk::YLeaf iferrdrop; //type: uint32
        ydk::YLeaf sendserverfail; //type: uint32
        ydk::YLeaf sendclientfail; //type: uint32
        ydk::YLeaf unkservervrfintfdrop; //type: uint32
        ydk::YLeaf maxhopexceeddrop; //type: uint32
        ydk::YLeaf opt82faildrop; //type: uint32
        ydk::YLeaf malformpktdrop; //type: uint32

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::StatItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems : public ydk::Entity
{
    public:
        ComplexItems();
        ~ComplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComplexList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class IpItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems
        class TextItems; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems> text_items;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::IpItems::IpList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::MacItems::MacList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::UbyteItems::UByteList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::ComplexItems::ComplexList::TextItems::TextList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::TextItems::TextList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::IpItems::IpList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::MacItems::MacList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::UbyteItems::UByteList


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtvrfMbrItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems


class System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::RelayifItems::RelayIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::DhcpItems::InstItems::ServerifItems : public ydk::Entity
{
    public:
        ServerifItems();
        ~ServerifItems();

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

        class ServerIfList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList

        ydk::YList serverif_list;
        
}; // System::DhcpItems::InstItems::ServerifItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList : public ydk::Entity
{
    public:
        ServerIfList();
        ~ServerIfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class ComplexItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems
        class TextItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems
        class IpItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems
        class RtvrfMbrItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems> complex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems> text_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems : public ydk::Entity
{
    public:
        ComplexItems();
        ~ComplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComplexList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class IpItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems
        class TextItems; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems> text_items;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::IpItems::IpList


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::MacItems::MacList


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::UbyteItems::UByteList


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::ComplexItems::ComplexList::TextItems::TextList


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::TextItems::TextList


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::IpItems::IpList


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::MacItems::MacList


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::UbyteItems::UByteList


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtvrfMbrItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems


class System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::ServerifItems::ServerIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::DhcpItems::InstItems::SrcifItems : public ydk::Entity
{
    public:
        SrcifItems();
        ~SrcifItems();

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

        ydk::YLeaf sourceinterface; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::DhcpItems::InstItems::SrcifItems


class System::DhcpItems::InstItems::V6srcifItems : public ydk::Entity
{
    public:
        V6srcifItems();
        ~V6srcifItems();

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

        ydk::YLeaf v6sourceinterface; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        ydk::YLeaf ctrl; //type: string
        ydk::YLeaf opererr; //type: string

}; // System::DhcpItems::InstItems::V6srcifItems


class System::DhcpItems::InstItems::IpsrcbindipItems : public ydk::Entity
{
    public:
        IpsrcbindipItems();
        ~IpsrcbindipItems();

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

        class IpSrcBindList; //type: System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList

        ydk::YList ipsrcbind_list;
        
}; // System::DhcpItems::InstItems::IpsrcbindipItems


class System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList : public ydk::Entity
{
    public:
        IpSrcBindList();
        ~IpSrcBindList();

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

        ydk::YLeaf bindip; //type: string
        ydk::YLeaf bindvlan; //type: uint16
        ydk::YLeaf bindmac; //type: string
        ydk::YLeaf bindintf; //type: string

}; // System::DhcpItems::InstItems::IpsrcbindipItems::IpSrcBindList


class System::DhcpItems::InstItems::IpsgifItems : public ydk::Entity
{
    public:
        IpsgifItems();
        ~IpsgifItems();

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

        class IpsgIfList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList

        ydk::YList ipsgif_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList : public ydk::Entity
{
    public:
        IpsgIfList();
        ~IpsgIfList();

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

        ydk::YLeaf id; //type: string
        ydk::YLeaf ipsgenabled; //type: boolean
        ydk::YLeaf name; //type: string
        ydk::YLeaf descr; //type: string
        ydk::YLeaf adminst; //type: NwAdminSt_
        class ComplexItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems
        class TextItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems
        class IpItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems
        class RtvrfMbrItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems
        class RtnwPathToIfItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems> complex_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems> text_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems> rtvrfmbr_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems> rtnwpathtoif_items;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems : public ydk::Entity
{
    public:
        ComplexItems();
        ~ComplexItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ComplexList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList

        ydk::YList complex_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList : public ydk::Entity
{
    public:
        ComplexList();
        ~ComplexList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf id; //type: uint32
        class IpItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems
        class MacItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems
        class Uint64Items; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items
        class Uint32Items; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items
        class Uint16Items; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items
        class UbyteItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems
        class TextItems; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems

        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems> ip_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems> mac_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items> uint64_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items> uint32_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items> uint16_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems> ubyte_items;
        std::shared_ptr<cisco_nx_os::Cisco_NX_OS_device::System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems> text_items;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::IpItems::IpList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::MacItems::MacList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::UbyteItems::UByteList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::ComplexItems::ComplexList::TextItems::TextList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems : public ydk::Entity
{
    public:
        TextItems();
        ~TextItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TextList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList

        ydk::YList text_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList : public ydk::Entity
{
    public:
        TextList();
        ~TextList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::TextItems::TextList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems : public ydk::Entity
{
    public:
        IpItems();
        ~IpItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList

        ydk::YList ip_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList : public ydk::Entity
{
    public:
        IpList();
        ~IpList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::IpItems::IpList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems : public ydk::Entity
{
    public:
        MacItems();
        ~MacItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList

        ydk::YList mac_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList : public ydk::Entity
{
    public:
        MacList();
        ~MacList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: string

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::MacItems::MacList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items : public ydk::Entity
{
    public:
        Uint64Items();
        ~Uint64Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt64List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List

        ydk::YList uint64_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List : public ydk::Entity
{
    public:
        UInt64List();
        ~UInt64List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint64

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint64Items::UInt64List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items : public ydk::Entity
{
    public:
        Uint32Items();
        ~Uint32Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt32List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List

        ydk::YList uint32_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List : public ydk::Entity
{
    public:
        UInt32List();
        ~UInt32List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint32

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint32Items::UInt32List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items : public ydk::Entity
{
    public:
        Uint16Items();
        ~Uint16Items();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UInt16List; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List

        ydk::YList uint16_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List : public ydk::Entity
{
    public:
        UInt16List();
        ~UInt16List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint16

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::Uint16Items::UInt16List


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems : public ydk::Entity
{
    public:
        UbyteItems();
        ~UbyteItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UByteList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList

        ydk::YList ubyte_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList : public ydk::Entity
{
    public:
        UByteList();
        ~UByteList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf code; //type: uint16
        ydk::YLeaf value_; //type: uint8

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::UbyteItems::UByteList


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems : public ydk::Entity
{
    public:
        RtvrfMbrItems();
        ~RtvrfMbrItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtvrfMbrItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems : public ydk::Entity
{
    public:
        RtnwPathToIfItems();
        ~RtnwPathToIfItems();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RtNwPathToIfList; //type: System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList

        ydk::YList rtnwpathtoif_list;
        
}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems


class System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList : public ydk::Entity
{
    public:
        RtNwPathToIfList();
        ~RtNwPathToIfList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tdn; //type: string
        ydk::YLeaf tcl; //type: RelnClassId

}; // System::DhcpItems::InstItems::IpsgifItems::IpsgIfList::RtnwPathToIfItems::RtNwPathToIfList


class System::DhcpItems::InstItems::IpsgexvlanItems : public ydk::Entity
{
    public:
        IpsgexvlanItems();
        ~IpsgexvlanItems();

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

        class IpsgExVlanList; //type: System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList

        ydk::YList ipsgexvlan_list;
        
}; // System::DhcpItems::InstItems::IpsgexvlanItems


class System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList : public ydk::Entity
{
    public:
        IpsgExVlanList();
        ~IpsgExVlanList();

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

        ydk::YLeaf ipsgexvlannum; //type: uint16

}; // System::DhcpItems::InstItems::IpsgexvlanItems::IpsgExVlanList


}
}

#endif /* _CISCO_NX_OS_DEVICE_17_ */

