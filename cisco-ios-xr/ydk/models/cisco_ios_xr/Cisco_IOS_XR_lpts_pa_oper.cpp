
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_lpts_pa_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_pa_oper {

LptsPa::LptsPa()
    :
    entry_xr(std::make_shared<LptsPa::EntryXr>())
    , entries(std::make_shared<LptsPa::Entries>())
{
    entry_xr->parent = this;
    entries->parent = this;

    yang_name = "lpts-pa"; yang_parent_name = "Cisco-IOS-XR-lpts-pa-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

LptsPa::~LptsPa()
{
}

bool LptsPa::has_data() const
{
    if (is_presence_container) return true;
    return (entry_xr !=  nullptr && entry_xr->has_data())
	|| (entries !=  nullptr && entries->has_data());
}

bool LptsPa::has_operation() const
{
    return is_set(yfilter)
	|| (entry_xr !=  nullptr && entry_xr->has_operation())
	|| (entries !=  nullptr && entries->has_operation());
}

std::string LptsPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pa-oper:lpts-pa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LptsPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry-xr")
    {
        if(entry_xr == nullptr)
        {
            entry_xr = std::make_shared<LptsPa::EntryXr>();
        }
        return entry_xr;
    }

    if(child_yang_name == "entries")
    {
        if(entries == nullptr)
        {
            entries = std::make_shared<LptsPa::Entries>();
        }
        return entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LptsPa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(entry_xr != nullptr)
    {
        _children["entry-xr"] = entry_xr;
    }

    if(entries != nullptr)
    {
        _children["entries"] = entries;
    }

    return _children;
}

void LptsPa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> LptsPa::clone_ptr() const
{
    return std::make_shared<LptsPa>();
}

std::string LptsPa::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string LptsPa::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function LptsPa::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LptsPa::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool LptsPa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry-xr" || name == "entries")
        return true;
    return false;
}

LptsPa::EntryXr::EntryXr()
    :
    entry(this, {"entry"})
{

    yang_name = "entry-xr"; yang_parent_name = "lpts-pa"; is_top_level_class = false; has_list_ancestor = false; 
}

LptsPa::EntryXr::~EntryXr()
{
}

bool LptsPa::EntryXr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPa::EntryXr::has_operation() const
{
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsPa::EntryXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pa-oper:lpts-pa/" << get_segment_path();
    return path_buffer.str();
}

std::string LptsPa::EntryXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPa::EntryXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LptsPa::EntryXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto ent_ = std::make_shared<LptsPa::EntryXr::Entry>();
        ent_->parent = this;
        entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LptsPa::EntryXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LptsPa::EntryXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPa::EntryXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsPa::EntryXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

LptsPa::EntryXr::Entry::Entry()
    :
    entry{YType::str, "entry"},
    location{YType::uint32, "location"},
    client_id{YType::uint32, "client-id"},
    vid{YType::uint32, "vid"},
    cookie{YType::uint32, "cookie"},
    l3protocol{YType::uint32, "l3protocol"},
    l4protocol{YType::uint32, "l4protocol"},
    smask{YType::uint32, "smask"},
    ifs{YType::uint32, "ifs"},
    ptype{YType::uint32, "ptype"},
    local_ip{YType::str, "local-ip"},
    remote_ip{YType::str, "remote-ip"},
    local_len{YType::uint8, "local-len"},
    remote_len{YType::uint8, "remote-len"},
    local_port{YType::uint16, "local-port"},
    remote_port{YType::uint16, "remote-port"},
    packet_misc{YType::uint32, "packet-misc"},
    scope{YType::uint32, "scope"},
    client_flags{YType::uint32, "client-flags"},
    min_ttl{YType::uint8, "min-ttl"},
    lazy_bindq_delay{YType::uint32, "lazy-bindq-delay"},
    ptq_delay{YType::uint32, "ptq-delay"}
        ,
    ctime(std::make_shared<LptsPa::EntryXr::Entry::Ctime>())
    , utime(std::make_shared<LptsPa::EntryXr::Entry::Utime>())
{
    ctime->parent = this;
    utime->parent = this;

    yang_name = "entry"; yang_parent_name = "entry-xr"; is_top_level_class = false; has_list_ancestor = false; 
}

LptsPa::EntryXr::Entry::~Entry()
{
}

bool LptsPa::EntryXr::Entry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set
	|| location.is_set
	|| client_id.is_set
	|| vid.is_set
	|| cookie.is_set
	|| l3protocol.is_set
	|| l4protocol.is_set
	|| smask.is_set
	|| ifs.is_set
	|| ptype.is_set
	|| local_ip.is_set
	|| remote_ip.is_set
	|| local_len.is_set
	|| remote_len.is_set
	|| local_port.is_set
	|| remote_port.is_set
	|| packet_misc.is_set
	|| scope.is_set
	|| client_flags.is_set
	|| min_ttl.is_set
	|| lazy_bindq_delay.is_set
	|| ptq_delay.is_set
	|| (ctime !=  nullptr && ctime->has_data())
	|| (utime !=  nullptr && utime->has_data());
}

bool LptsPa::EntryXr::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(vid.yfilter)
	|| ydk::is_set(cookie.yfilter)
	|| ydk::is_set(l3protocol.yfilter)
	|| ydk::is_set(l4protocol.yfilter)
	|| ydk::is_set(smask.yfilter)
	|| ydk::is_set(ifs.yfilter)
	|| ydk::is_set(ptype.yfilter)
	|| ydk::is_set(local_ip.yfilter)
	|| ydk::is_set(remote_ip.yfilter)
	|| ydk::is_set(local_len.yfilter)
	|| ydk::is_set(remote_len.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(remote_port.yfilter)
	|| ydk::is_set(packet_misc.yfilter)
	|| ydk::is_set(scope.yfilter)
	|| ydk::is_set(client_flags.yfilter)
	|| ydk::is_set(min_ttl.yfilter)
	|| ydk::is_set(lazy_bindq_delay.yfilter)
	|| ydk::is_set(ptq_delay.yfilter)
	|| (ctime !=  nullptr && ctime->has_operation())
	|| (utime !=  nullptr && utime->has_operation());
}

std::string LptsPa::EntryXr::Entry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pa-oper:lpts-pa/entry-xr/" << get_segment_path();
    return path_buffer.str();
}

std::string LptsPa::EntryXr::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry";
    ADD_KEY_TOKEN(entry, "entry");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPa::EntryXr::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (vid.is_set || is_set(vid.yfilter)) leaf_name_data.push_back(vid.get_name_leafdata());
    if (cookie.is_set || is_set(cookie.yfilter)) leaf_name_data.push_back(cookie.get_name_leafdata());
    if (l3protocol.is_set || is_set(l3protocol.yfilter)) leaf_name_data.push_back(l3protocol.get_name_leafdata());
    if (l4protocol.is_set || is_set(l4protocol.yfilter)) leaf_name_data.push_back(l4protocol.get_name_leafdata());
    if (smask.is_set || is_set(smask.yfilter)) leaf_name_data.push_back(smask.get_name_leafdata());
    if (ifs.is_set || is_set(ifs.yfilter)) leaf_name_data.push_back(ifs.get_name_leafdata());
    if (ptype.is_set || is_set(ptype.yfilter)) leaf_name_data.push_back(ptype.get_name_leafdata());
    if (local_ip.is_set || is_set(local_ip.yfilter)) leaf_name_data.push_back(local_ip.get_name_leafdata());
    if (remote_ip.is_set || is_set(remote_ip.yfilter)) leaf_name_data.push_back(remote_ip.get_name_leafdata());
    if (local_len.is_set || is_set(local_len.yfilter)) leaf_name_data.push_back(local_len.get_name_leafdata());
    if (remote_len.is_set || is_set(remote_len.yfilter)) leaf_name_data.push_back(remote_len.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());
    if (packet_misc.is_set || is_set(packet_misc.yfilter)) leaf_name_data.push_back(packet_misc.get_name_leafdata());
    if (scope.is_set || is_set(scope.yfilter)) leaf_name_data.push_back(scope.get_name_leafdata());
    if (client_flags.is_set || is_set(client_flags.yfilter)) leaf_name_data.push_back(client_flags.get_name_leafdata());
    if (min_ttl.is_set || is_set(min_ttl.yfilter)) leaf_name_data.push_back(min_ttl.get_name_leafdata());
    if (lazy_bindq_delay.is_set || is_set(lazy_bindq_delay.yfilter)) leaf_name_data.push_back(lazy_bindq_delay.get_name_leafdata());
    if (ptq_delay.is_set || is_set(ptq_delay.yfilter)) leaf_name_data.push_back(ptq_delay.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LptsPa::EntryXr::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ctime")
    {
        if(ctime == nullptr)
        {
            ctime = std::make_shared<LptsPa::EntryXr::Entry::Ctime>();
        }
        return ctime;
    }

    if(child_yang_name == "utime")
    {
        if(utime == nullptr)
        {
            utime = std::make_shared<LptsPa::EntryXr::Entry::Utime>();
        }
        return utime;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LptsPa::EntryXr::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ctime != nullptr)
    {
        _children["ctime"] = ctime;
    }

    if(utime != nullptr)
    {
        _children["utime"] = utime;
    }

    return _children;
}

void LptsPa::EntryXr::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vid")
    {
        vid = value;
        vid.value_namespace = name_space;
        vid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cookie")
    {
        cookie = value;
        cookie.value_namespace = name_space;
        cookie.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l3protocol")
    {
        l3protocol = value;
        l3protocol.value_namespace = name_space;
        l3protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4protocol")
    {
        l4protocol = value;
        l4protocol.value_namespace = name_space;
        l4protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smask")
    {
        smask = value;
        smask.value_namespace = name_space;
        smask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifs")
    {
        ifs = value;
        ifs.value_namespace = name_space;
        ifs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptype")
    {
        ptype = value;
        ptype.value_namespace = name_space;
        ptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ip")
    {
        local_ip = value;
        local_ip.value_namespace = name_space;
        local_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ip")
    {
        remote_ip = value;
        remote_ip.value_namespace = name_space;
        remote_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-len")
    {
        local_len = value;
        local_len.value_namespace = name_space;
        local_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-len")
    {
        remote_len = value;
        remote_len.value_namespace = name_space;
        remote_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-misc")
    {
        packet_misc = value;
        packet_misc.value_namespace = name_space;
        packet_misc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scope")
    {
        scope = value;
        scope.value_namespace = name_space;
        scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-flags")
    {
        client_flags = value;
        client_flags.value_namespace = name_space;
        client_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-ttl")
    {
        min_ttl = value;
        min_ttl.value_namespace = name_space;
        min_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lazy-bindq-delay")
    {
        lazy_bindq_delay = value;
        lazy_bindq_delay.value_namespace = name_space;
        lazy_bindq_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ptq-delay")
    {
        ptq_delay = value;
        ptq_delay.value_namespace = name_space;
        ptq_delay.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPa::EntryXr::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "vid")
    {
        vid.yfilter = yfilter;
    }
    if(value_path == "cookie")
    {
        cookie.yfilter = yfilter;
    }
    if(value_path == "l3protocol")
    {
        l3protocol.yfilter = yfilter;
    }
    if(value_path == "l4protocol")
    {
        l4protocol.yfilter = yfilter;
    }
    if(value_path == "smask")
    {
        smask.yfilter = yfilter;
    }
    if(value_path == "ifs")
    {
        ifs.yfilter = yfilter;
    }
    if(value_path == "ptype")
    {
        ptype.yfilter = yfilter;
    }
    if(value_path == "local-ip")
    {
        local_ip.yfilter = yfilter;
    }
    if(value_path == "remote-ip")
    {
        remote_ip.yfilter = yfilter;
    }
    if(value_path == "local-len")
    {
        local_len.yfilter = yfilter;
    }
    if(value_path == "remote-len")
    {
        remote_len.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
    if(value_path == "packet-misc")
    {
        packet_misc.yfilter = yfilter;
    }
    if(value_path == "scope")
    {
        scope.yfilter = yfilter;
    }
    if(value_path == "client-flags")
    {
        client_flags.yfilter = yfilter;
    }
    if(value_path == "min-ttl")
    {
        min_ttl.yfilter = yfilter;
    }
    if(value_path == "lazy-bindq-delay")
    {
        lazy_bindq_delay.yfilter = yfilter;
    }
    if(value_path == "ptq-delay")
    {
        ptq_delay.yfilter = yfilter;
    }
}

bool LptsPa::EntryXr::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ctime" || name == "utime" || name == "entry" || name == "location" || name == "client-id" || name == "vid" || name == "cookie" || name == "l3protocol" || name == "l4protocol" || name == "smask" || name == "ifs" || name == "ptype" || name == "local-ip" || name == "remote-ip" || name == "local-len" || name == "remote-len" || name == "local-port" || name == "remote-port" || name == "packet-misc" || name == "scope" || name == "client-flags" || name == "min-ttl" || name == "lazy-bindq-delay" || name == "ptq-delay")
        return true;
    return false;
}

LptsPa::EntryXr::Entry::Ctime::Ctime()
    :
    tv_sec{YType::uint32, "tv-sec"},
    tv_nsec{YType::uint32, "tv-nsec"}
{

    yang_name = "ctime"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

LptsPa::EntryXr::Entry::Ctime::~Ctime()
{
}

bool LptsPa::EntryXr::Entry::Ctime::has_data() const
{
    if (is_presence_container) return true;
    return tv_sec.is_set
	|| tv_nsec.is_set;
}

bool LptsPa::EntryXr::Entry::Ctime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tv_sec.yfilter)
	|| ydk::is_set(tv_nsec.yfilter);
}

std::string LptsPa::EntryXr::Entry::Ctime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ctime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPa::EntryXr::Entry::Ctime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tv_sec.is_set || is_set(tv_sec.yfilter)) leaf_name_data.push_back(tv_sec.get_name_leafdata());
    if (tv_nsec.is_set || is_set(tv_nsec.yfilter)) leaf_name_data.push_back(tv_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LptsPa::EntryXr::Entry::Ctime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LptsPa::EntryXr::Entry::Ctime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LptsPa::EntryXr::Entry::Ctime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tv-sec")
    {
        tv_sec = value;
        tv_sec.value_namespace = name_space;
        tv_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec = value;
        tv_nsec.value_namespace = name_space;
        tv_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPa::EntryXr::Entry::Ctime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tv-sec")
    {
        tv_sec.yfilter = yfilter;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec.yfilter = yfilter;
    }
}

bool LptsPa::EntryXr::Entry::Ctime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tv-sec" || name == "tv-nsec")
        return true;
    return false;
}

LptsPa::EntryXr::Entry::Utime::Utime()
    :
    tv_sec{YType::uint32, "tv-sec"},
    tv_nsec{YType::uint32, "tv-nsec"}
{

    yang_name = "utime"; yang_parent_name = "entry"; is_top_level_class = false; has_list_ancestor = true; 
}

LptsPa::EntryXr::Entry::Utime::~Utime()
{
}

bool LptsPa::EntryXr::Entry::Utime::has_data() const
{
    if (is_presence_container) return true;
    return tv_sec.is_set
	|| tv_nsec.is_set;
}

bool LptsPa::EntryXr::Entry::Utime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tv_sec.yfilter)
	|| ydk::is_set(tv_nsec.yfilter);
}

std::string LptsPa::EntryXr::Entry::Utime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utime";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPa::EntryXr::Entry::Utime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tv_sec.is_set || is_set(tv_sec.yfilter)) leaf_name_data.push_back(tv_sec.get_name_leafdata());
    if (tv_nsec.is_set || is_set(tv_nsec.yfilter)) leaf_name_data.push_back(tv_nsec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LptsPa::EntryXr::Entry::Utime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LptsPa::EntryXr::Entry::Utime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LptsPa::EntryXr::Entry::Utime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tv-sec")
    {
        tv_sec = value;
        tv_sec.value_namespace = name_space;
        tv_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec = value;
        tv_nsec.value_namespace = name_space;
        tv_nsec.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPa::EntryXr::Entry::Utime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tv-sec")
    {
        tv_sec.yfilter = yfilter;
    }
    if(value_path == "tv-nsec")
    {
        tv_nsec.yfilter = yfilter;
    }
}

bool LptsPa::EntryXr::Entry::Utime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tv-sec" || name == "tv-nsec")
        return true;
    return false;
}

LptsPa::Entries::Entries()
    :
    entry(this, {"entry"})
{

    yang_name = "entries"; yang_parent_name = "lpts-pa"; is_top_level_class = false; has_list_ancestor = false; 
}

LptsPa::Entries::~Entries()
{
}

bool LptsPa::Entries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_data())
            return true;
    }
    return false;
}

bool LptsPa::Entries::has_operation() const
{
    for (std::size_t index=0; index<entry.len(); index++)
    {
        if(entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LptsPa::Entries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pa-oper:lpts-pa/" << get_segment_path();
    return path_buffer.str();
}

std::string LptsPa::Entries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPa::Entries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LptsPa::Entries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "entry")
    {
        auto ent_ = std::make_shared<LptsPa::Entries::Entry>();
        ent_->parent = this;
        entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LptsPa::Entries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LptsPa::Entries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LptsPa::Entries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool LptsPa::Entries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

LptsPa::Entries::Entry::Entry()
    :
    entry{YType::str, "entry"},
    flags{YType::uint32, "flags"},
    open_flags{YType::uint32, "open-flags"},
    location{YType::uint32, "location"},
    client_id{YType::uint32, "client-id"},
    times{YType::str, "times"}
{

    yang_name = "entry"; yang_parent_name = "entries"; is_top_level_class = false; has_list_ancestor = false; 
}

LptsPa::Entries::Entry::~Entry()
{
}

bool LptsPa::Entries::Entry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set
	|| flags.is_set
	|| open_flags.is_set
	|| location.is_set
	|| client_id.is_set
	|| times.is_set;
}

bool LptsPa::Entries::Entry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(open_flags.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(client_id.yfilter)
	|| ydk::is_set(times.yfilter);
}

std::string LptsPa::Entries::Entry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-lpts-pa-oper:lpts-pa/entries/" << get_segment_path();
    return path_buffer.str();
}

std::string LptsPa::Entries::Entry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "entry";
    ADD_KEY_TOKEN(entry, "entry");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LptsPa::Entries::Entry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (open_flags.is_set || is_set(open_flags.yfilter)) leaf_name_data.push_back(open_flags.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (client_id.is_set || is_set(client_id.yfilter)) leaf_name_data.push_back(client_id.get_name_leafdata());
    if (times.is_set || is_set(times.yfilter)) leaf_name_data.push_back(times.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LptsPa::Entries::Entry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LptsPa::Entries::Entry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LptsPa::Entries::Entry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-flags")
    {
        open_flags = value;
        open_flags.value_namespace = name_space;
        open_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-id")
    {
        client_id = value;
        client_id.value_namespace = name_space;
        client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "times")
    {
        times = value;
        times.value_namespace = name_space;
        times.value_namespace_prefix = name_space_prefix;
    }
}

void LptsPa::Entries::Entry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "open-flags")
    {
        open_flags.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "client-id")
    {
        client_id.yfilter = yfilter;
    }
    if(value_path == "times")
    {
        times.yfilter = yfilter;
    }
}

bool LptsPa::Entries::Entry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry" || name == "flags" || name == "open-flags" || name == "location" || name == "client-id" || name == "times")
        return true;
    return false;
}


}
}

